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

// Function: sub_001BB5F0
// Address: 0x1bb5f0 - 0x1bb6b0
void sub_001BB5F0_0x1bb5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB5F0_0x1bb5f0");
#endif

    switch (ctx->pc) {
        case 0x1bb610u: goto label_1bb610;
        case 0x1bb61cu: goto label_1bb61c;
        case 0x1bb628u: goto label_1bb628;
        case 0x1bb658u: goto label_1bb658;
        default: break;
    }

    ctx->pc = 0x1bb5f0u;

    // 0x1bb5f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bb5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bb5f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bb5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bb5f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bb5fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bb5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bb600: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1bb600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1bb604: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bb604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb608: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1BB608u;
    {
        const bool branch_taken_0x1bb608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb608) {
            ctx->pc = 0x1BB674u;
            goto label_1bb674;
        }
    }
    ctx->pc = 0x1BB610u;
label_1bb610:
    // 0x1bb610: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bb610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb614: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1BB614u;
    {
        const bool branch_taken_0x1bb614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb614) {
            ctx->pc = 0x1BB65Cu;
            goto label_1bb65c;
        }
    }
    ctx->pc = 0x1BB61Cu;
label_1bb61c:
    // 0x1bb61c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1bb61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bb620: 0xc06e5c8  jal         func_1B9720
    ctx->pc = 0x1BB620u;
    SET_GPR_U32(ctx, 31, 0x1BB628u);
    ctx->pc = 0x1B9720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9720u, 0x1BB620u, 0x1BB628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB628u;
label_1bb628:
    // 0x1bb628: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1bb628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bb62c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1bb62cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1bb630: 0x8c6300b4  lw          $v1, 0xB4($v1)
    ctx->pc = 0x1bb630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1bb634: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1bb634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bb638: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1bb638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1bb63c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1bb63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bb640: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1bb640u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bb644: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bb644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bb648: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1bb648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bb64c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bb64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb650: 0xc06edac  jal         func_1BB6B0
    ctx->pc = 0x1BB650u;
    SET_GPR_U32(ctx, 31, 0x1BB658u);
    ctx->pc = 0x1BB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB6B0u, 0x1BB650u, 0x1BB658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB658u;
label_1bb658:
    // 0x1bb658: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bb658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bb65c:
    // 0x1bb65c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb660: 0x8c63be58  lw          $v1, -0x41A8($v1)
    ctx->pc = 0x1bb660u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BE58u));
    // 0x1bb664: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1bb664u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bb668: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1BB668u;
    {
        const bool branch_taken_0x1bb668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb668) {
            ctx->pc = 0x1BB61Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb61c;
        }
    }
    ctx->pc = 0x1BB670u;
    // 0x1bb670: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bb670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bb674:
    // 0x1bb674: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb678: 0x8c63be5c  lw          $v1, -0x41A4($v1)
    ctx->pc = 0x1bb678u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BE5Cu));
    // 0x1bb67c: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x1bb67cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bb680: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1BB680u;
    {
        const bool branch_taken_0x1bb680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb680) {
            ctx->pc = 0x1BB610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb610;
        }
    }
    ctx->pc = 0x1BB688u;
    // 0x1bb688: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1bb688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bb68c: 0xa06000b0  sb          $zero, 0xB0($v1)
    ctx->pc = 0x1bb68cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 176), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bb690: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bb690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb694: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb698: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb69c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1bb69cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bb6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB6A8u;
    // 0x1bb6a8: 0x0  nop
    ctx->pc = 0x1bb6a8u;
    // NOP
    // 0x1bb6ac: 0x0  nop
    ctx->pc = 0x1bb6acu;
    // NOP
    ctx->pc = 0x1bb6b0u;
}
