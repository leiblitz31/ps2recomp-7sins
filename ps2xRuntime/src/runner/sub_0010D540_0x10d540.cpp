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

// Function: sub_0010D540
// Address: 0x10d540 - 0x10d780
void sub_0010D540_0x10d540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D540_0x10d540");
#endif

    switch (ctx->pc) {
        case 0x10d5acu: goto label_10d5ac;
        case 0x10d61cu: goto label_10d61c;
        case 0x10d668u: goto label_10d668;
        case 0x10d690u: goto label_10d690;
        case 0x10d6b4u: goto label_10d6b4;
        case 0x10d6f8u: goto label_10d6f8;
        case 0x10d728u: goto label_10d728;
        case 0x10d738u: goto label_10d738;
        case 0x10d764u: goto label_10d764;
        default: break;
    }

    ctx->pc = 0x10d540u;

    // 0x10d540: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x10d540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x10d544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10d544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10d548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10d548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10d54c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10d54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10d550: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x10d550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x10d554: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x10d554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x10d558: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x10d558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x10d55c: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x10d55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x10d560: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x10d560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10d564: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x10D564u;
    {
        const bool branch_taken_0x10d564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d564) {
            ctx->pc = 0x10D764u;
            goto label_10d764;
        }
    }
    ctx->pc = 0x10D56Cu;
    // 0x10d56c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x10d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d570: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x10d570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10d574: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x10d574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d578: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10d578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10d57c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x10d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10d580: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x10d580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10d584: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x10d584u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10d588: 0x1812  mflo        $v1
    ctx->pc = 0x10d588u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x10d58c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x10d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10d590: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x10d590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10d594: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x10D594u;
    {
        const bool branch_taken_0x10d594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d594) {
            ctx->pc = 0x10D740u;
            goto label_10d740;
        }
    }
    ctx->pc = 0x10D59Cu;
    // 0x10d59c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x10d59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10d5a0: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x10d5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10d5a4: 0xc042844  jal         func_10A110
    ctx->pc = 0x10D5A4u;
    SET_GPR_U32(ctx, 31, 0x10D5ACu);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x10D5A4u, 0x10D5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D5ACu;
label_10d5ac:
    // 0x10d5ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x10d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d5b0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10d5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10d5b4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x10d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10d5b8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x10d5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10d5bc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x10d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10d5c0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x10d5c0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10d5c4: 0x8812  mflo        $s1
    ctx->pc = 0x10d5c4u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x10d5c8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x10d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d5cc: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x10d5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10d5d0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x10d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10d5d4: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x10d5d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x10d5d8: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x10D5D8u;
    {
        const bool branch_taken_0x10d5d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d5d8) {
            ctx->pc = 0x10D698u;
            goto label_10d698;
        }
    }
    ctx->pc = 0x10D5E0u;
    // 0x10d5e0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x10d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d5e4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x10d5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10d5e8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x10d5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10d5ec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x10d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10d5f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10d5f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10d5f8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x10d5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10d5fc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x10d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d600: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x10d600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d604: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x10d604u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d608: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x10d608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10d60c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x10d60cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10d610: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x10d610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x10d614: 0xc0436e0  jal         func_10DB80
    ctx->pc = 0x10D614u;
    SET_GPR_U32(ctx, 31, 0x10D61Cu);
    ctx->pc = 0x10DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB80u, 0x10D614u, 0x10D61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D61Cu;
label_10d61c:
    // 0x10d61c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x10d61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d620: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x10d620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10d624: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x10d624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10d628: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10d628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10d62c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x10d62cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10d630: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10d630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10d634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10d634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10d638: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x10d638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x10d63c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x10d63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10d640: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x10d640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10d644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10d644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10d648: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10d648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10d64c: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x10d64cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10d650: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x10d650u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d654: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x10d654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10d658: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10d658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d65c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x10d65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x10d660: 0xc0436b0  jal         func_10DAC0
    ctx->pc = 0x10D660u;
    SET_GPR_U32(ctx, 31, 0x10D668u);
    ctx->pc = 0x10DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DAC0u, 0x10D660u, 0x10D668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D668u;
label_10d668:
    // 0x10d668: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x10d668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10d66c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x10d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10d670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10d670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10d674: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x10d674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10d678: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x10d678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10d67c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x10d67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10d680: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x10d680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10d684: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x10d684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10d688: 0xc043698  jal         func_10DA60
    ctx->pc = 0x10D688u;
    SET_GPR_U32(ctx, 31, 0x10D690u);
    ctx->pc = 0x10DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA60u, 0x10D688u, 0x10D690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D690u;
label_10d690:
    // 0x10d690: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x10D690u;
    {
        const bool branch_taken_0x10d690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d690) {
            ctx->pc = 0x10D728u;
            goto label_10d728;
        }
    }
    ctx->pc = 0x10D698u;
label_10d698:
    // 0x10d698: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x10d698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d69c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x10d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10d6a0: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x10d6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x10d6a4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x10d6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10d6a8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x10d6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10d6ac: 0xc043688  jal         func_10DA20
    ctx->pc = 0x10D6ACu;
    SET_GPR_U32(ctx, 31, 0x10D6B4u);
    ctx->pc = 0x10DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA20u, 0x10D6ACu, 0x10D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D6B4u;
label_10d6b4:
    // 0x10d6b4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x10d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10d6b8: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x10d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x10d6bc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x10d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10d6c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10d6c4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x10d6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10d6c8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x10d6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d6cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x10d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10d6d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10d6d4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x10d6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x10d6d8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x10d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d6dc: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x10d6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d6e0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x10d6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10d6e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10d6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d6e8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x10d6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10d6ec: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x10d6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x10d6f0: 0xc0436e0  jal         func_10DB80
    ctx->pc = 0x10D6F0u;
    SET_GPR_U32(ctx, 31, 0x10D6F8u);
    ctx->pc = 0x10DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB80u, 0x10D6F0u, 0x10D6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D6F8u;
label_10d6f8:
    // 0x10d6f8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x10d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d6fc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x10d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x10d700: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10d700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x10d704: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x10d704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10d708: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10d708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10d70c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10d710: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x10d710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x10d714: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x10d714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10d718: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10d718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d71c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x10d71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10d720: 0xc043698  jal         func_10DA60
    ctx->pc = 0x10D720u;
    SET_GPR_U32(ctx, 31, 0x10D728u);
    ctx->pc = 0x10DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA60u, 0x10D720u, 0x10D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D728u;
label_10d728:
    // 0x10d728: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x10d728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10d72c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x10d72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10d730: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x10D730u;
    SET_GPR_U32(ctx, 31, 0x10D738u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x10D730u, 0x10D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D738u;
label_10d738:
    // 0x10d738: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10D738u;
    {
        const bool branch_taken_0x10d738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d738) {
            ctx->pc = 0x10D764u;
            goto label_10d764;
        }
    }
    ctx->pc = 0x10D740u;
label_10d740:
    // 0x10d740: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x10d740u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d744: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x10d744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d748: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x10d748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10d74c: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x10d74cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10d750: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x10d750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10d754: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x10d754u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10d758: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10d758u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d75c: 0xc0435e0  jal         func_10D780
    ctx->pc = 0x10D75Cu;
    SET_GPR_U32(ctx, 31, 0x10D764u);
    ctx->pc = 0x10D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D780u, 0x10D75Cu, 0x10D764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D764u;
label_10d764:
    // 0x10d764: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10d764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d768: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10d768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d76c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10d76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d770: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x10d770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x10d774: 0x3e00008  jr          $ra
    ctx->pc = 0x10D774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D77Cu;
    // 0x10d77c: 0x0  nop
    ctx->pc = 0x10d77cu;
    // NOP
    ctx->pc = 0x10d780u;
}
