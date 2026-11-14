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

// Function: sub_004AEE38
// Address: 0x4aee38 - 0x4aeeb8
void sub_004AEE38_0x4aee38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AEE38_0x4aee38");
#endif

    switch (ctx->pc) {
        case 0x4aee50u: goto label_4aee50;
        case 0x4aee6cu: goto label_4aee6c;
        case 0x4aee80u: goto label_4aee80;
        case 0x4aee90u: goto label_4aee90;
        case 0x4aee98u: goto label_4aee98;
        case 0x4aeea0u: goto label_4aeea0;
        default: break;
    }

    ctx->pc = 0x4aee38u;

    // 0x4aee38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4aee38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4aee3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4aee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aee40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4aee40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4aee44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aee48: 0xc0c0348  jal         func_300D20
    ctx->pc = 0x4AEE48u;
    SET_GPR_U32(ctx, 31, 0x4AEE50u);
    ctx->pc = 0x4AEE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEE48u;
    // 0x4aee4c: 0xaf80b8c4  sw          $zero, -0x473C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949060), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300D20u, 0x4AEE48u, 0x4AEE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEE50u;
label_4aee50:
    // 0x4aee50: 0xaf80c238  sw          $zero, -0x3DC8($gp)
    ctx->pc = 0x4aee50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951480), GPR_U32(ctx, 0));
    // 0x4aee54: 0x8f90b8a4  lw          $s0, -0x475C($gp)
    ctx->pc = 0x4aee54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949028)));
    // 0x4aee58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4aee58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4aee5c: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4AEE5Cu;
    {
        const bool branch_taken_0x4aee5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AEE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEE5Cu;
        // 0x4aee60: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aee5c) {
            ctx->pc = 0x4AEE88u;
            goto label_4aee88;
        }
    }
    ctx->pc = 0x4AEE64u;
    // 0x4aee64: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x4AEE64u;
    SET_GPR_U32(ctx, 31, 0x4AEE6Cu);
    ctx->pc = 0x4AEE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEE64u;
    // 0x4aee68: 0x8f84c240  lw          $a0, -0x3DC0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x4AEE64u, 0x4AEE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEE6Cu;
label_4aee6c:
    // 0x4aee6c: 0x8f83b8a4  lw          $v1, -0x475C($gp)
    ctx->pc = 0x4aee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949028)));
    // 0x4aee70: 0x54700005  bnel        $v1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AEE70u;
    {
        const bool branch_taken_0x4aee70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x4aee70) {
            ctx->pc = 0x4AEE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AEE70u;
            // 0x4aee74: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AEE88u;
            goto label_4aee88;
        }
    }
    ctx->pc = 0x4AEE78u;
    // 0x4aee78: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x4AEE78u;
    SET_GPR_U32(ctx, 31, 0x4AEE80u);
    ctx->pc = 0x4AEE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEE78u;
    // 0x4aee7c: 0x8f84c240  lw          $a0, -0x3DC0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x4AEE78u, 0x4AEE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEE80u;
label_4aee80:
    // 0x4aee80: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4aee80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4aee84: 0x0  nop
    ctx->pc = 0x4aee84u;
    // NOP
label_4aee88:
    // 0x4aee88: 0xc12b8e2  jal         func_4AE388
    ctx->pc = 0x4AEE88u;
    SET_GPR_U32(ctx, 31, 0x4AEE90u);
    ctx->pc = 0x4AEE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEE88u;
    // 0x4aee8c: 0x24849180  addiu       $a0, $a0, -0x6E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE388u, 0x4AEE88u, 0x4AEE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEE90u;
label_4aee90:
    // 0x4aee90: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x4AEE90u;
    SET_GPR_U32(ctx, 31, 0x4AEE98u);
    ctx->pc = 0x4AEE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEE90u;
    // 0x4aee94: 0x8f84c240  lw          $a0, -0x3DC0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x4AEE90u, 0x4AEE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEE98u;
label_4aee98:
    // 0x4aee98: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x4AEE98u;
    SET_GPR_U32(ctx, 31, 0x4AEEA0u);
    ctx->pc = 0x4AEE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEE98u;
    // 0x4aee9c: 0x8f84c244  lw          $a0, -0x3DBC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951492)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x4AEE98u, 0x4AEEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEEA0u;
label_4aeea0:
    // 0x4aeea0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4aeea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aeea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aeea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aeea8: 0xaf80b8b4  sw          $zero, -0x474C($gp)
    ctx->pc = 0x4aeea8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949044), GPR_U32(ctx, 0));
    // 0x4aeeac: 0x3e00008  jr          $ra
    ctx->pc = 0x4AEEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AEEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEEACu;
        // 0x4aeeb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AEEB4u;
    // 0x4aeeb4: 0x0  nop
    ctx->pc = 0x4aeeb4u;
    // NOP
    ctx->pc = 0x4aeeb8u;
}
