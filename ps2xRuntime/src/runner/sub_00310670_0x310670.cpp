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

// Function: sub_00310670
// Address: 0x310670 - 0x3106c8
void sub_00310670_0x310670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310670_0x310670");
#endif

    switch (ctx->pc) {
        case 0x310684u: goto label_310684;
        default: break;
    }

    ctx->pc = 0x310670u;

    // 0x310670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x310670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x310674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x310674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x310678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x310678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31067c: 0xc0bdff6  jal         func_2F7FD8
    ctx->pc = 0x31067Cu;
    SET_GPR_U32(ctx, 31, 0x310684u);
    ctx->pc = 0x310680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31067Cu;
    // 0x310680: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7FD8u, 0x31067Cu, 0x310684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310684u;
label_310684:
    // 0x310684: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x310684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310688: 0x4e0000a  bltz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x310688u;
    {
        const bool branch_taken_0x310688 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x31068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310688u;
        // 0x31068c: 0x24040334  addiu       $a0, $zero, 0x334 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310688) {
            ctx->pc = 0x3106B4u;
            goto label_3106b4;
        }
    }
    ctx->pc = 0x310690u;
    // 0x310690: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x310690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x310694: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x310694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x310698: 0x24637e40  addiu       $v1, $v1, 0x7E40
    ctx->pc = 0x310698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32320));
    // 0x31069c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31069cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3106a0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x3106a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3106a4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3106a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3106a8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3106a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3106ac: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x3106acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
    // 0x3106b0: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x3106b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_3106b4:
    // 0x3106b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3106b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3106b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3106b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3106bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3106BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3106C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3106BCu;
        // 0x3106c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3106BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3106C4u;
    // 0x3106c4: 0x0  nop
    ctx->pc = 0x3106c4u;
    // NOP
    ctx->pc = 0x3106c8u;
}
