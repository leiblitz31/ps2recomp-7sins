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

// Function: sub_002FEBD8
// Address: 0x2febd8 - 0x2feca0
void sub_002FEBD8_0x2febd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FEBD8_0x2febd8");
#endif

    switch (ctx->pc) {
        case 0x2fec28u: goto label_2fec28;
        case 0x2fec48u: goto label_2fec48;
        case 0x2fec5cu: goto label_2fec5c;
        case 0x2fec70u: goto label_2fec70;
        case 0x2fec80u: goto label_2fec80;
        case 0x2fec88u: goto label_2fec88;
        default: break;
    }

    ctx->pc = 0x2febd8u;

    // 0x2febd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2febd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2febdc: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2febdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2febe0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2febe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2febe4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2febe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2febe8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2febe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2febec: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x2febecu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x2febf0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2febf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2febf4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2febf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2febf8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FEBF8u;
    {
        const bool branch_taken_0x2febf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2febf8) {
            ctx->pc = 0x2FEBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEBF8u;
            // 0x2febfc: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEC0Cu;
            goto label_2fec0c;
        }
    }
    ctx->pc = 0x2FEC00u;
    // 0x2fec00: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2fec00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2fec04: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2FEC04u;
    {
        const bool branch_taken_0x2fec04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC04u;
        // 0x2fec08: 0x34428008  ori         $v0, $v0, 0x8008 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32776);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fec04) {
            ctx->pc = 0x2FEC8Cu;
            goto label_2fec8c;
        }
    }
    ctx->pc = 0x2FEC0Cu;
label_2fec0c:
    // 0x2fec0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fec10: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x2fec10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
    // 0x2fec14: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2fec14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2fec18: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2fec18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2fec1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fec1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fec20: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x2FEC20u;
    SET_GPR_U32(ctx, 31, 0x2FEC28u);
    ctx->pc = 0x2FEC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEC20u;
    // 0x2fec24: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x2FEC20u, 0x2FEC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC28u;
label_2fec28:
    // 0x2fec28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fec28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fec2c: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FEC2Cu;
    {
        const bool branch_taken_0x2fec2c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2FEC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC2Cu;
        // 0x2fec30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fec2c) {
            ctx->pc = 0x2FEC40u;
            goto label_2fec40;
        }
    }
    ctx->pc = 0x2FEC34u;
    // 0x2fec34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2fec34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2fec38: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2FEC38u;
    {
        const bool branch_taken_0x2fec38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC38u;
        // 0x2fec3c: 0x34428003  ori         $v0, $v0, 0x8003 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fec38) {
            ctx->pc = 0x2FEC8Cu;
            goto label_2fec8c;
        }
    }
    ctx->pc = 0x2FEC40u;
label_2fec40:
    // 0x2fec40: 0xc0c25c0  jal         func_309700
    ctx->pc = 0x2FEC40u;
    SET_GPR_U32(ctx, 31, 0x2FEC48u);
    ctx->pc = 0x2FEC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEC40u;
    // 0x2fec44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309700u, 0x2FEC40u, 0x2FEC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC48u;
label_2fec48:
    // 0x2fec48: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2fec48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2fec4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fec4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fec50: 0x24a5ee18  addiu       $a1, $a1, -0x11E8
    ctx->pc = 0x2fec50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962712));
    // 0x2fec54: 0xc0c262c  jal         func_3098B0
    ctx->pc = 0x2FEC54u;
    SET_GPR_U32(ctx, 31, 0x2FEC5Cu);
    ctx->pc = 0x2FEC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEC54u;
    // 0x2fec58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3098B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3098B0u, 0x2FEC54u, 0x2FEC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC5Cu;
label_2fec5c:
    // 0x2fec5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fec5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fec60: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FEC60u;
    {
        const bool branch_taken_0x2fec60 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2fec60) {
            ctx->pc = 0x2FEC78u;
            goto label_2fec78;
        }
    }
    ctx->pc = 0x2FEC68u;
    // 0x2fec68: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x2FEC68u;
    SET_GPR_U32(ctx, 31, 0x2FEC70u);
    ctx->pc = 0x2FEC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEC68u;
    // 0x2fec6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x2FEC68u, 0x2FEC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC70u;
label_2fec70:
    // 0x2fec70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FEC70u;
    {
        const bool branch_taken_0x2fec70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC70u;
        // 0x2fec74: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fec70) {
            ctx->pc = 0x2FEC8Cu;
            goto label_2fec8c;
        }
    }
    ctx->pc = 0x2FEC78u;
label_2fec78:
    // 0x2fec78: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x2FEC78u;
    SET_GPR_U32(ctx, 31, 0x2FEC80u);
    ctx->pc = 0x2FEC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEC78u;
    // 0x2fec7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x2FEC78u, 0x2FEC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC80u;
label_2fec80:
    // 0x2fec80: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x2FEC80u;
    SET_GPR_U32(ctx, 31, 0x2FEC88u);
    ctx->pc = 0x2FEC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEC80u;
    // 0x2fec84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x2FEC80u, 0x2FEC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC88u;
label_2fec88:
    // 0x2fec88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fec88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fec8c:
    // 0x2fec8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2fec8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fec90: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2fec90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fec94: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2fec94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fec98: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC98u;
        // 0x2fec9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FECA0u;
}
