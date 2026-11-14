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

// Function: sub_0041D338
// Address: 0x41d338 - 0x41d388
void sub_0041D338_0x41d338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D338_0x41d338");
#endif

    switch (ctx->pc) {
        case 0x41d338u: goto label_41d338;
        case 0x41d33cu: goto label_41d33c;
        case 0x41d340u: goto label_41d340;
        case 0x41d344u: goto label_41d344;
        case 0x41d348u: goto label_41d348;
        case 0x41d34cu: goto label_41d34c;
        case 0x41d350u: goto label_41d350;
        case 0x41d354u: goto label_41d354;
        case 0x41d358u: goto label_41d358;
        case 0x41d35cu: goto label_41d35c;
        case 0x41d360u: goto label_41d360;
        case 0x41d364u: goto label_41d364;
        case 0x41d368u: goto label_41d368;
        case 0x41d36cu: goto label_41d36c;
        case 0x41d370u: goto label_41d370;
        case 0x41d374u: goto label_41d374;
        case 0x41d378u: goto label_41d378;
        case 0x41d37cu: goto label_41d37c;
        case 0x41d380u: goto label_41d380;
        case 0x41d384u: goto label_41d384;
        default: break;
    }

    ctx->pc = 0x41d338u;

label_41d338:
    // 0x41d338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41d338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41d33c:
    // 0x41d33c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41d33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41d340:
    // 0x41d340: 0x90820023  lbu         $v0, 0x23($a0)
    ctx->pc = 0x41d340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
label_41d344:
    // 0x41d344: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x41d344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_41d348:
    // 0x41d348: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x41d348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_41d34c:
    // 0x41d34c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_41d350:
    if (ctx->pc == 0x41D350u) {
        ctx->pc = 0x41D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D34Cu;
        // 0x41d350: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D354u;
        goto label_41d354;
    }
    ctx->pc = 0x41D34Cu;
    {
        const bool branch_taken_0x41d34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D34Cu;
        // 0x41d350: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d34c) {
            ctx->pc = 0x41D35Cu;
            goto label_41d35c;
        }
    }
    ctx->pc = 0x41D354u;
label_41d354:
    // 0x41d354: 0x10000009  b           . + 4 + (0x9 << 2)
label_41d358:
    if (ctx->pc == 0x41D358u) {
        ctx->pc = 0x41D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D354u;
        // 0x41d358: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D35Cu;
        goto label_41d35c;
    }
    ctx->pc = 0x41D354u;
    {
        const bool branch_taken_0x41d354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D354u;
        // 0x41d358: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d354) {
            ctx->pc = 0x41D37Cu;
            goto label_41d37c;
        }
    }
    ctx->pc = 0x41D35Cu;
label_41d35c:
    // 0x41d35c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41d35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41d360:
    // 0x41d360: 0x8c62e938  lw          $v0, -0x16C8($v1)
    ctx->pc = 0x41d360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961464)));
label_41d364:
    // 0x41d364: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41d364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41d368:
    // 0x41d368: 0x40f809  jalr        $v0
label_41d36c:
    if (ctx->pc == 0x41D36Cu) {
        ctx->pc = 0x41D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D368u;
        // 0x41d36c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D370u;
        goto label_41d370;
    }
    ctx->pc = 0x41D368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41D370u);
        ctx->pc = 0x41D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D368u;
        // 0x41d36c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D368u, 0x41D370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41D370u;
label_41d370:
    // 0x41d370: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_41d374:
    if (ctx->pc == 0x41D374u) {
        ctx->pc = 0x41D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D370u;
        // 0x41d374: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D378u;
        goto label_41d378;
    }
    ctx->pc = 0x41D370u;
    {
        const bool branch_taken_0x41d370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D370u;
        // 0x41d374: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d370) {
            ctx->pc = 0x41D37Cu;
            goto label_41d37c;
        }
    }
    ctx->pc = 0x41D378u;
label_41d378:
    // 0x41d378: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x41d378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_41d37c:
    // 0x41d37c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41d37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41d380:
    // 0x41d380: 0x3e00008  jr          $ra
label_41d384:
    if (ctx->pc == 0x41D384u) {
        ctx->pc = 0x41D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D380u;
        // 0x41d384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D388u;
        goto label_fallthrough_0x41d380;
    }
    ctx->pc = 0x41D380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D380u;
        // 0x41d384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41d380:
    ctx->pc = 0x41D388u;
}
