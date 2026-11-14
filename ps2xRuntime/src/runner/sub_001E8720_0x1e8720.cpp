#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E8720
// Address: 0x1e8720 - 0x1e8960
void sub_001E8720_0x1e8720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8720_0x1e8720");
#endif

    switch (ctx->pc) {
        case 0x1e878cu: goto label_1e878c;
        case 0x1e87fcu: goto label_1e87fc;
        case 0x1e8848u: goto label_1e8848;
        case 0x1e8870u: goto label_1e8870;
        case 0x1e8894u: goto label_1e8894;
        case 0x1e88d8u: goto label_1e88d8;
        case 0x1e8908u: goto label_1e8908;
        case 0x1e8918u: goto label_1e8918;
        case 0x1e8944u: goto label_1e8944;
        default: break;
    }

    ctx->pc = 0x1e8720u;

    // 0x1e8720: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e8720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e8724: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e8724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e8728: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e872c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e872cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8730: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1e8730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1e8734: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1e8734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1e8738: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1e8738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1e873c: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x1e873cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x1e8740: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1e8740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e8744: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x1E8744u;
    {
        const bool branch_taken_0x1e8744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8744) {
            ctx->pc = 0x1E8944u;
            goto label_1e8944;
        }
    }
    ctx->pc = 0x1E874Cu;
    // 0x1e874c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e874cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8750: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1e8750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e8754: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e8754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8758: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1e8758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e875c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e875cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e8760: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e8760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e8764: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e8764u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e8768: 0x1812  mflo        $v1
    ctx->pc = 0x1e8768u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1e876c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e8770: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e8770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e8774: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1E8774u;
    {
        const bool branch_taken_0x1e8774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8774) {
            ctx->pc = 0x1E8920u;
            goto label_1e8920;
        }
    }
    ctx->pc = 0x1E877Cu;
    // 0x1e877c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e877cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e8780: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1e8780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e8784: 0xc07a390  jal         func_1E8E40
    ctx->pc = 0x1E8784u;
    SET_GPR_U32(ctx, 31, 0x1E878Cu);
    ctx->pc = 0x1E8E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E40u, 0x1E8784u, 0x1E878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E878Cu;
label_1e878c:
    // 0x1e878c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e878cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8790: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e8790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e8794: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e8794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e8798: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e8798u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e879c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e879cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e87a0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e87a0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e87a4: 0x8812  mflo        $s1
    ctx->pc = 0x1e87a4u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x1e87a8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e87ac: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1e87acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e87b0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e87b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e87b4: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x1e87b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e87b8: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x1E87B8u;
    {
        const bool branch_taken_0x1e87b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e87b8) {
            ctx->pc = 0x1E8878u;
            goto label_1e8878;
        }
    }
    ctx->pc = 0x1E87C0u;
    // 0x1e87c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e87c4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1e87c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e87c8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1e87c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e87cc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e87ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e87d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e87d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e87d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e87d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e87d8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1e87d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1e87dc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e87dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e87e0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e87e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e87e4: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x1e87e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e87e8: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1e87e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e87ec: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1e87ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e87f0: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x1e87f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1e87f4: 0xc07a370  jal         func_1E8DC0
    ctx->pc = 0x1E87F4u;
    SET_GPR_U32(ctx, 31, 0x1E87FCu);
    ctx->pc = 0x1E8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8DC0u, 0x1E87F4u, 0x1E87FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E87FCu;
label_1e87fc:
    // 0x1e87fc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e87fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8800: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1e8800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e8804: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e8804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e8808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e880c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e880cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8810: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e8810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e8814: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8818: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e8818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1e881c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1e881cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e8820: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e8820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e8824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8828: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e882c: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x1e882cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e8830: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1e8830u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e8834: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e8834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e8838: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e8838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e883c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1e883cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e8840: 0xc07a340  jal         func_1E8D00
    ctx->pc = 0x1E8840u;
    SET_GPR_U32(ctx, 31, 0x1E8848u);
    ctx->pc = 0x1E8D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8D00u, 0x1E8840u, 0x1E8848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8848u;
label_1e8848:
    // 0x1e8848: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1e8848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e884c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e884cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e8850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8854: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e8854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8858: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e8858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e885c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1e885cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8860: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e8860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e8864: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1e8864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e8868: 0xc07a328  jal         func_1E8CA0
    ctx->pc = 0x1E8868u;
    SET_GPR_U32(ctx, 31, 0x1E8870u);
    ctx->pc = 0x1E8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8CA0u, 0x1E8868u, 0x1E8870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8870u;
label_1e8870:
    // 0x1e8870: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1E8870u;
    {
        const bool branch_taken_0x1e8870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8870) {
            ctx->pc = 0x1E8908u;
            goto label_1e8908;
        }
    }
    ctx->pc = 0x1E8878u;
label_1e8878:
    // 0x1e8878: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e8878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e887c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e887cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e8880: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1e8880u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e8884: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1e8884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e8888: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1e8888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e888c: 0xc07a318  jal         func_1E8C60
    ctx->pc = 0x1E888Cu;
    SET_GPR_U32(ctx, 31, 0x1E8894u);
    ctx->pc = 0x1E8C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8C60u, 0x1E888Cu, 0x1E8894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8894u;
label_1e8894:
    // 0x1e8894: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1e8894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e8898: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x1e8898u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e889c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e889cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e88a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e88a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e88a4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1e88a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e88a8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e88a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e88ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e88acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e88b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e88b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e88b4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e88b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1e88b8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e88b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e88bc: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1e88bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e88c0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e88c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e88c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e88c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88c8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1e88c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e88cc: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1e88ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1e88d0: 0xc07a370  jal         func_1E8DC0
    ctx->pc = 0x1E88D0u;
    SET_GPR_U32(ctx, 31, 0x1E88D8u);
    ctx->pc = 0x1E8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8DC0u, 0x1E88D0u, 0x1E88D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E88D8u;
label_1e88d8:
    // 0x1e88d8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e88d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e88dc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e88dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e88e0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e88e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e88e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e88e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e88e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e88e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e88ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e88ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e88f0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e88f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1e88f4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e88f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e88f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e88f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88fc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1e88fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e8900: 0xc07a328  jal         func_1E8CA0
    ctx->pc = 0x1E8900u;
    SET_GPR_U32(ctx, 31, 0x1E8908u);
    ctx->pc = 0x1E8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8CA0u, 0x1E8900u, 0x1E8908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8908u;
label_1e8908:
    // 0x1e8908: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e8908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e890c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e890cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8910: 0xc0759e4  jal         func_1D6790
    ctx->pc = 0x1E8910u;
    SET_GPR_U32(ctx, 31, 0x1E8918u);
    ctx->pc = 0x1D6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6790u, 0x1E8910u, 0x1E8918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8918u;
label_1e8918:
    // 0x1e8918: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E8918u;
    {
        const bool branch_taken_0x1e8918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8918) {
            ctx->pc = 0x1E8944u;
            goto label_1e8944;
        }
    }
    ctx->pc = 0x1E8920u;
label_1e8920:
    // 0x1e8920: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1e8920u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e8924: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e8924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8928: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e8928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e892c: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1e892cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e8930: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1e8930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e8934: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x1e8934u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e8938: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e8938u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e893c: 0xc07a258  jal         func_1E8960
    ctx->pc = 0x1E893Cu;
    SET_GPR_U32(ctx, 31, 0x1E8944u);
    ctx->pc = 0x1E8960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8960u, 0x1E893Cu, 0x1E8944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8944u;
label_1e8944:
    // 0x1e8944: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e8944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8948: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e894c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e894cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8950: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1e8950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e8954: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E895Cu;
    // 0x1e895c: 0x0  nop
    ctx->pc = 0x1e895cu;
    // NOP
    ctx->pc = 0x1e8960u;
}
