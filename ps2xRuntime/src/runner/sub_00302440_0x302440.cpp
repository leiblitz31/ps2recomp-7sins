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

// Function: sub_00302440
// Address: 0x302440 - 0x3024b0
void sub_00302440_0x302440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302440_0x302440");
#endif

    switch (ctx->pc) {
        case 0x30245cu: goto label_30245c;
        case 0x302464u: goto label_302464;
        case 0x302478u: goto label_302478;
        case 0x302494u: goto label_302494;
        default: break;
    }

    ctx->pc = 0x302440u;

    // 0x302440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x302444: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x302444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x302448: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x302448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x30244c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30244cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302450: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x302454: 0xc0c0876  jal         func_3021D8
    ctx->pc = 0x302454u;
    SET_GPR_U32(ctx, 31, 0x30245Cu);
    ctx->pc = 0x302458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302454u;
    // 0x302458: 0x3c11004f  lui         $s1, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)79 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3021D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3021D8u, 0x302454u, 0x30245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30245Cu;
label_30245c:
    // 0x30245c: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x30245Cu;
    SET_GPR_U32(ctx, 31, 0x302464u);
    ctx->pc = 0x302460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30245Cu;
    // 0x302460: 0x8e240c28  lw          $a0, 0xC28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x30245Cu, 0x302464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302464u;
label_302464:
    // 0x302464: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x302464u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x302468: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x302468u;
    {
        const bool branch_taken_0x302468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302468u;
        // 0x30246c: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302468) {
            ctx->pc = 0x302480u;
            goto label_302480;
        }
    }
    ctx->pc = 0x302470u;
    // 0x302470: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x302470u;
    SET_GPR_U32(ctx, 31, 0x302478u);
    ctx->pc = 0x302474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302470u;
    // 0x302474: 0x8e240c28  lw          $a0, 0xC28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x302470u, 0x302478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302478u;
label_302478:
    // 0x302478: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x302478u;
    {
        const bool branch_taken_0x302478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302478u;
        // 0x30247c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302478) {
            ctx->pc = 0x302498u;
            goto label_302498;
        }
    }
    ctx->pc = 0x302480u;
label_302480:
    // 0x302480: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x302480u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x302484: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x302484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x302488: 0x8e240c28  lw          $a0, 0xC28($s1)
    ctx->pc = 0x302488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3112)));
    // 0x30248c: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x30248Cu;
    SET_GPR_U32(ctx, 31, 0x302494u);
    ctx->pc = 0x302490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30248Cu;
    // 0x302490: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x30248Cu, 0x302494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302494u;
label_302494:
    // 0x302494: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x302494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302498:
    // 0x302498: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x302498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30249c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x30249cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3024a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3024a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3024a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3024A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3024A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3024A4u;
        // 0x3024a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3024A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3024ACu;
    // 0x3024ac: 0x0  nop
    ctx->pc = 0x3024acu;
    // NOP
    ctx->pc = 0x3024b0u;
}
