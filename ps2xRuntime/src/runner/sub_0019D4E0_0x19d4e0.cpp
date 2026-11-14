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

// Function: sub_0019D4E0
// Address: 0x19d4e0 - 0x19d720
void sub_0019D4E0_0x19d4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D4E0_0x19d4e0");
#endif

    switch (ctx->pc) {
        case 0x19d54cu: goto label_19d54c;
        case 0x19d5bcu: goto label_19d5bc;
        case 0x19d608u: goto label_19d608;
        case 0x19d630u: goto label_19d630;
        case 0x19d654u: goto label_19d654;
        case 0x19d698u: goto label_19d698;
        case 0x19d6c8u: goto label_19d6c8;
        case 0x19d6d8u: goto label_19d6d8;
        case 0x19d704u: goto label_19d704;
        default: break;
    }

    ctx->pc = 0x19d4e0u;

    // 0x19d4e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x19d4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x19d4e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19d4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19d4e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d4ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d4f0: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x19d4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x19d4f4: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x19d4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x19d4f8: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x19d4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x19d4fc: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x19d4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
    // 0x19d500: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x19d500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19d504: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x19D504u;
    {
        const bool branch_taken_0x19d504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d504) {
            ctx->pc = 0x19D704u;
            goto label_19d704;
        }
    }
    ctx->pc = 0x19D50Cu;
    // 0x19d50c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x19d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19d510: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x19d510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19d514: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x19d514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19d518: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x19d518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19d51c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x19d51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d520: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x19d520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x19d524: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19d524u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19d528: 0x1812  mflo        $v1
    ctx->pc = 0x19d528u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x19d52c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x19d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19d530: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x19d530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19d534: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x19D534u;
    {
        const bool branch_taken_0x19d534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d534) {
            ctx->pc = 0x19D6E0u;
            goto label_19d6e0;
        }
    }
    ctx->pc = 0x19D53Cu;
    // 0x19d53c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19d53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19d540: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x19d540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19d544: 0xc067700  jal         func_19DC00
    ctx->pc = 0x19D544u;
    SET_GPR_U32(ctx, 31, 0x19D54Cu);
    ctx->pc = 0x19DC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DC00u, 0x19D544u, 0x19D54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D54Cu;
label_19d54c:
    // 0x19d54c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x19d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19d550: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x19d550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19d554: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x19d554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19d558: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x19d558u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d55c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x19d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x19d560: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19d560u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19d564: 0x8812  mflo        $s1
    ctx->pc = 0x19d564u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x19d568: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x19d568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19d56c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x19d56cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19d570: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x19d570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19d574: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x19d574u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x19d578: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x19D578u;
    {
        const bool branch_taken_0x19d578 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d578) {
            ctx->pc = 0x19D638u;
            goto label_19d638;
        }
    }
    ctx->pc = 0x19D580u;
    // 0x19d580: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x19d580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19d584: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x19d584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19d588: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x19d588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19d58c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x19d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19d590: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19d590u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d594: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19d594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19d598: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x19d598u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19d59c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x19d59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19d5a0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x19d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19d5a4: 0xa3a0007c  sb          $zero, 0x7C($sp)
    ctx->pc = 0x19d5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x19d5a8: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x19d5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19d5ac: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x19d5acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19d5b0: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x19d5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x19d5b4: 0xc0676e0  jal         func_19DB80
    ctx->pc = 0x19D5B4u;
    SET_GPR_U32(ctx, 31, 0x19D5BCu);
    ctx->pc = 0x19DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB80u, 0x19D5B4u, 0x19D5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D5BCu;
label_19d5bc:
    // 0x19d5bc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x19d5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19d5c0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x19d5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19d5c4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x19d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19d5c8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d5cc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x19d5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19d5d0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x19d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19d5d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d5d8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x19d5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x19d5dc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x19d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19d5e0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x19d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19d5e4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d5e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19d5ec: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x19d5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19d5f0: 0xa3a00078  sb          $zero, 0x78($sp)
    ctx->pc = 0x19d5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x19d5f4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x19d5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19d5f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19d5f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d5fc: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x19d5fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x19d600: 0xc0676b0  jal         func_19DAC0
    ctx->pc = 0x19D600u;
    SET_GPR_U32(ctx, 31, 0x19D608u);
    ctx->pc = 0x19DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DAC0u, 0x19D600u, 0x19D608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D608u;
label_19d608:
    // 0x19d608: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x19d608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19d60c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x19d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19d610: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19d610u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d614: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x19d614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19d618: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x19d618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19d61c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19d61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d620: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x19d620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19d624: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x19d624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19d628: 0xc067698  jal         func_19DA60
    ctx->pc = 0x19D628u;
    SET_GPR_U32(ctx, 31, 0x19D630u);
    ctx->pc = 0x19DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA60u, 0x19D628u, 0x19D630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D630u;
label_19d630:
    // 0x19d630: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x19D630u;
    {
        const bool branch_taken_0x19d630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d630) {
            ctx->pc = 0x19D6C8u;
            goto label_19d6c8;
        }
    }
    ctx->pc = 0x19D638u;
label_19d638:
    // 0x19d638: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x19d638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19d63c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x19d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19d640: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x19d640u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x19d644: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x19d644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19d648: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x19d648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19d64c: 0xc067688  jal         func_19DA20
    ctx->pc = 0x19D64Cu;
    SET_GPR_U32(ctx, 31, 0x19D654u);
    ctx->pc = 0x19DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA20u, 0x19D64Cu, 0x19D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D654u;
label_19d654:
    // 0x19d654: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x19d654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19d658: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x19d658u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x19d65c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x19d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19d660: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19d660u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d664: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x19d664u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19d668: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x19d668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19d66c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19d670: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19d670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19d674: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x19d674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x19d678: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x19d678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19d67c: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x19d67cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x19d680: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x19d680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19d684: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19d684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d688: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x19d688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19d68c: 0x27a70074  addiu       $a3, $sp, 0x74
    ctx->pc = 0x19d68cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x19d690: 0xc0676e0  jal         func_19DB80
    ctx->pc = 0x19D690u;
    SET_GPR_U32(ctx, 31, 0x19D698u);
    ctx->pc = 0x19DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB80u, 0x19D690u, 0x19D698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D698u;
label_19d698:
    // 0x19d698: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x19d698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19d69c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x19d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x19d6a0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x19d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x19d6a4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x19d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19d6a8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x19d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19d6ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d6b0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x19d6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x19d6b4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x19d6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19d6b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19d6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d6bc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x19d6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19d6c0: 0xc067698  jal         func_19DA60
    ctx->pc = 0x19D6C0u;
    SET_GPR_U32(ctx, 31, 0x19D6C8u);
    ctx->pc = 0x19DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA60u, 0x19D6C0u, 0x19D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D6C8u;
label_19d6c8:
    // 0x19d6c8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19d6cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x19d6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19d6d0: 0xc0670bc  jal         func_19C2F0
    ctx->pc = 0x19D6D0u;
    SET_GPR_U32(ctx, 31, 0x19D6D8u);
    ctx->pc = 0x19C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C2F0u, 0x19D6D0u, 0x19D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D6D8u;
label_19d6d8:
    // 0x19d6d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19D6D8u;
    {
        const bool branch_taken_0x19d6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d6d8) {
            ctx->pc = 0x19D704u;
            goto label_19d704;
        }
    }
    ctx->pc = 0x19D6E0u;
label_19d6e0:
    // 0x19d6e0: 0xa3a00070  sb          $zero, 0x70($sp)
    ctx->pc = 0x19d6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x19d6e4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x19d6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19d6e8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x19d6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19d6ec: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x19d6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19d6f0: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x19d6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19d6f4: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x19d6f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19d6f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19d6f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d6fc: 0xc0675c8  jal         func_19D720
    ctx->pc = 0x19D6FCu;
    SET_GPR_U32(ctx, 31, 0x19D704u);
    ctx->pc = 0x19D720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D720u, 0x19D6FCu, 0x19D704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D704u;
label_19d704:
    // 0x19d704: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19d704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d708: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d70c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d70cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d710: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x19d710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x19d714: 0x3e00008  jr          $ra
    ctx->pc = 0x19D714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D71Cu;
    // 0x19d71c: 0x0  nop
    ctx->pc = 0x19d71cu;
    // NOP
    ctx->pc = 0x19d720u;
}
