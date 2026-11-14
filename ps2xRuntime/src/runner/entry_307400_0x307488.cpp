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

// Function: entry_307400
// Address: 0x307400 - 0x307488
void entry_307400_0x307488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_307400_0x307488");
#endif

    switch (ctx->pc) {
        case 0x307458u: goto label_307458;
        case 0x307470u: goto label_307470;
        default: break;
    }

    ctx->pc = 0x307400u;

    // 0x307400: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x307400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307404: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x307404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x307408: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x307408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x30740c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30740cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x307410: 0x2c82000d  sltiu       $v0, $a0, 0xD
    ctx->pc = 0x307410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x307414: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x307414u;
    {
        const bool branch_taken_0x307414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307414u;
        // 0x307418: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307414) {
            ctx->pc = 0x307428u;
            goto label_307428;
        }
    }
    ctx->pc = 0x30741Cu;
    // 0x30741c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x30741cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x307420: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x307420u;
    {
        const bool branch_taken_0x307420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307420u;
        // 0x307424: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307420) {
            ctx->pc = 0x307474u;
            goto label_307474;
        }
    }
    ctx->pc = 0x307428u;
label_307428:
    // 0x307428: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x307428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x30742c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x30742cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x307430: 0x24420f80  addiu       $v0, $v0, 0xF80
    ctx->pc = 0x307430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3968));
    // 0x307434: 0x2c840003  sltiu       $a0, $a0, 0x3
    ctx->pc = 0x307434u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x307438: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x307438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30743c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x30743cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x307440: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x307440u;
    {
        const bool branch_taken_0x307440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x307444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307440u;
        // 0x307444: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307440) {
            ctx->pc = 0x307460u;
            goto label_307460;
        }
    }
    ctx->pc = 0x307448u;
    // 0x307448: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x307448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x30744c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x30744cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307450: 0xc0bf604  jal         func_2FD810
    ctx->pc = 0x307450u;
    SET_GPR_U32(ctx, 31, 0x307458u);
    ctx->pc = 0x307454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307450u;
    // 0x307454: 0x24a57b00  addiu       $a1, $a1, 0x7B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD810u, 0x307450u, 0x307458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307458u;
label_307458:
    // 0x307458: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x307458u;
    {
        const bool branch_taken_0x307458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307458u;
        // 0x30745c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307458) {
            ctx->pc = 0x307474u;
            goto label_307474;
        }
    }
    ctx->pc = 0x307460u;
label_307460:
    // 0x307460: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x307460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x307464: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x307464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307468: 0xc0bf608  jal         func_2FD820
    ctx->pc = 0x307468u;
    SET_GPR_U32(ctx, 31, 0x307470u);
    ctx->pc = 0x30746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307468u;
    // 0x30746c: 0x24a57b00  addiu       $a1, $a1, 0x7B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD820u, 0x307468u, 0x307470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307470u;
label_307470:
    // 0x307470: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x307470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_307474:
    // 0x307474: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x307474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x307478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x307478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30747c: 0x3e00008  jr          $ra
    ctx->pc = 0x30747Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30747Cu;
        // 0x307480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30747Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307484u;
    // 0x307484: 0x0  nop
    ctx->pc = 0x307484u;
    // NOP
    ctx->pc = 0x307488u;
}
