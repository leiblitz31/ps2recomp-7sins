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

// Function: sub_003E1F10
// Address: 0x3e1f10 - 0x3e2600
void sub_003E1F10_0x3e1f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1F10_0x3e1f10");
#endif

    switch (ctx->pc) {
        case 0x3e2134u: goto label_3e2134;
        case 0x3e2148u: goto label_3e2148;
        case 0x3e215cu: goto label_3e215c;
        case 0x3e2170u: goto label_3e2170;
        case 0x3e238cu: goto label_3e238c;
        case 0x3e23a0u: goto label_3e23a0;
        case 0x3e23b4u: goto label_3e23b4;
        case 0x3e23c8u: goto label_3e23c8;
        case 0x3e23dcu: goto label_3e23dc;
        case 0x3e23f0u: goto label_3e23f0;
        case 0x3e2404u: goto label_3e2404;
        case 0x3e2418u: goto label_3e2418;
        case 0x3e2554u: goto label_3e2554;
        default: break;
    }

    ctx->pc = 0x3e1f10u;

    // 0x3e1f10: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E1F10u;
    {
        const bool branch_taken_0x3e1f10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1F10u;
        // 0x3e1f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1f10) {
            ctx->pc = 0x3E1F20u;
            goto label_3e1f20;
        }
    }
    ctx->pc = 0x3E1F18u;
    // 0x3e1f18: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3E1F18u;
    {
        const bool branch_taken_0x3e1f18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1f18) {
            ctx->pc = 0x3E1F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1F18u;
            // 0x3e1f1c: 0xdca20018  ld          $v0, 0x18($a1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1F20u;
            goto label_3e1f20;
        }
    }
    ctx->pc = 0x3E1F20u;
label_3e1f20:
    // 0x3e1f20: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1F28u;
    // 0x3e1f28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E1F28u;
    {
        const bool branch_taken_0x3e1f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1F28u;
        // 0x3e1f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1f28) {
            ctx->pc = 0x3E1F38u;
            goto label_3e1f38;
        }
    }
    ctx->pc = 0x3E1F30u;
    // 0x3e1f30: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3E1F30u;
    {
        const bool branch_taken_0x3e1f30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1f30) {
            ctx->pc = 0x3E1F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1F30u;
            // 0x3e1f34: 0x8ca20140  lw          $v0, 0x140($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1F38u;
            goto label_3e1f38;
        }
    }
    ctx->pc = 0x3E1F38u;
label_3e1f38:
    // 0x3e1f38: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1F40u;
    // 0x3e1f40: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E1F40u;
    {
        const bool branch_taken_0x3e1f40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1F40u;
        // 0x3e1f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1f40) {
            ctx->pc = 0x3E1F50u;
            goto label_3e1f50;
        }
    }
    ctx->pc = 0x3E1F48u;
    // 0x3e1f48: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3E1F48u;
    {
        const bool branch_taken_0x3e1f48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1f48) {
            ctx->pc = 0x3E1F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1F48u;
            // 0x3e1f4c: 0x90a2002d  lbu         $v0, 0x2D($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 45)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1F50u;
            goto label_3e1f50;
        }
    }
    ctx->pc = 0x3E1F50u;
label_3e1f50:
    // 0x3e1f50: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1F58u;
    // 0x3e1f58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E1F58u;
    {
        const bool branch_taken_0x3e1f58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1F58u;
        // 0x3e1f5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1f58) {
            ctx->pc = 0x3E1F68u;
            goto label_3e1f68;
        }
    }
    ctx->pc = 0x3E1F60u;
    // 0x3e1f60: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3E1F60u;
    {
        const bool branch_taken_0x3e1f60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1f60) {
            ctx->pc = 0x3E1F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1F60u;
            // 0x3e1f64: 0xdca20000  ld          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1F68u;
            goto label_3e1f68;
        }
    }
    ctx->pc = 0x3E1F68u;
label_3e1f68:
    // 0x3e1f68: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1F70u;
    // 0x3e1f70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E1F70u;
    {
        const bool branch_taken_0x3e1f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1F70u;
        // 0x3e1f74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1f70) {
            ctx->pc = 0x3E1F80u;
            goto label_3e1f80;
        }
    }
    ctx->pc = 0x3E1F78u;
    // 0x3e1f78: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3E1F78u;
    {
        const bool branch_taken_0x3e1f78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1f78) {
            ctx->pc = 0x3E1F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1F78u;
            // 0x3e1f7c: 0xdca20008  ld          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1F80u;
            goto label_3e1f80;
        }
    }
    ctx->pc = 0x3E1F80u;
label_3e1f80:
    // 0x3e1f80: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1F88u;
    // 0x3e1f88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E1F88u;
    {
        const bool branch_taken_0x3e1f88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1F88u;
        // 0x3e1f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1f88) {
            ctx->pc = 0x3E1F98u;
            goto label_3e1f98;
        }
    }
    ctx->pc = 0x3E1F90u;
    // 0x3e1f90: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3E1F90u;
    {
        const bool branch_taken_0x3e1f90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1f90) {
            ctx->pc = 0x3E1F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1F90u;
            // 0x3e1f94: 0x90a20028  lbu         $v0, 0x28($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1F98u;
            goto label_3e1f98;
        }
    }
    ctx->pc = 0x3E1F98u;
label_3e1f98:
    // 0x3e1f98: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1FA0u;
    // 0x3e1fa0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E1FA0u;
    {
        const bool branch_taken_0x3e1fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1FA0u;
        // 0x3e1fa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1fa0) {
            ctx->pc = 0x3E1FB0u;
            goto label_3e1fb0;
        }
    }
    ctx->pc = 0x3E1FA8u;
    // 0x3e1fa8: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3E1FA8u;
    {
        const bool branch_taken_0x3e1fa8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1fa8) {
            ctx->pc = 0x3E1FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1FA8u;
            // 0x3e1fac: 0x90a20029  lbu         $v0, 0x29($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 41)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1FB0u;
            goto label_3e1fb0;
        }
    }
    ctx->pc = 0x3E1FB0u;
label_3e1fb0:
    // 0x3e1fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1FB8u;
    // 0x3e1fb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E1FB8u;
    {
        const bool branch_taken_0x3e1fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1FB8u;
        // 0x3e1fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1fb8) {
            ctx->pc = 0x3E1FC8u;
            goto label_3e1fc8;
        }
    }
    ctx->pc = 0x3E1FC0u;
    // 0x3e1fc0: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3E1FC0u;
    {
        const bool branch_taken_0x3e1fc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1fc0) {
            ctx->pc = 0x3E1FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1FC0u;
            // 0x3e1fc4: 0x90a2002b  lbu         $v0, 0x2B($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 43)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1FC8u;
            goto label_3e1fc8;
        }
    }
    ctx->pc = 0x3E1FC8u;
label_3e1fc8:
    // 0x3e1fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1FD0u;
    // 0x3e1fd0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E1FD0u;
    {
        const bool branch_taken_0x3e1fd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1FD0u;
        // 0x3e1fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1fd0) {
            ctx->pc = 0x3E1FE0u;
            goto label_3e1fe0;
        }
    }
    ctx->pc = 0x3E1FD8u;
    // 0x3e1fd8: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3E1FD8u;
    {
        const bool branch_taken_0x3e1fd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1fd8) {
            ctx->pc = 0x3E1FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1FD8u;
            // 0x3e1fdc: 0x90a2002c  lbu         $v0, 0x2C($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1FE0u;
            goto label_3e1fe0;
        }
    }
    ctx->pc = 0x3E1FE0u;
label_3e1fe0:
    // 0x3e1fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1FE8u;
    // 0x3e1fe8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E1FE8u;
    {
        const bool branch_taken_0x3e1fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1FE8u;
        // 0x3e1fec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1fe8) {
            ctx->pc = 0x3E1FF8u;
            goto label_3e1ff8;
        }
    }
    ctx->pc = 0x3E1FF0u;
    // 0x3e1ff0: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3E1FF0u;
    {
        const bool branch_taken_0x3e1ff0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1ff0) {
            ctx->pc = 0x3E1FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1FF0u;
            // 0x3e1ff4: 0x90a2002a  lbu         $v0, 0x2A($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1FF8u;
            goto label_3e1ff8;
        }
    }
    ctx->pc = 0x3E1FF8u;
label_3e1ff8:
    // 0x3e1ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2000u;
    // 0x3e2000: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E2000u;
    {
        const bool branch_taken_0x3e2000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2000) {
            ctx->pc = 0x3E204Cu;
            goto label_3e204c;
        }
    }
    ctx->pc = 0x3E2008u;
    // 0x3e2008: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E2008u;
    {
        const bool branch_taken_0x3e2008 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2008) {
            ctx->pc = 0x3E204Cu;
            goto label_3e204c;
        }
    }
    ctx->pc = 0x3E2010u;
    // 0x3e2010: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e2010u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e2014: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3e2014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3e2018: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E2018u;
    {
        const bool branch_taken_0x3e2018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2018u;
        // 0x3e201c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2018) {
            ctx->pc = 0x3E204Cu;
            goto label_3e204c;
        }
    }
    ctx->pc = 0x3E2020u;
    // 0x3e2020: 0x90a300a0  lbu         $v1, 0xA0($a1)
    ctx->pc = 0x3e2020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x3e2024: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E2024u;
    {
        const bool branch_taken_0x3e2024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e2024) {
            ctx->pc = 0x3E203Cu;
            goto label_3e203c;
        }
    }
    ctx->pc = 0x3E202Cu;
    // 0x3e202c: 0xdca20098  ld          $v0, 0x98($a1)
    ctx->pc = 0x3e202cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 152)));
    // 0x3e2030: 0xdca50090  ld          $a1, 0x90($a1)
    ctx->pc = 0x3e2030u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x3e2034: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E2034u;
    {
        const bool branch_taken_0x3e2034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e2034) {
            ctx->pc = 0x3E2044u;
            goto label_3e2044;
        }
    }
    ctx->pc = 0x3E203Cu;
label_3e203c:
    // 0x3e203c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E203Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E203Cu;
        // 0x3e2040: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E203Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2044u;
label_3e2044:
    // 0x3e2044: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2044u;
        // 0x3e2048: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E204Cu;
label_3e204c:
    // 0x3e204c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E204Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E204Cu;
        // 0x3e2050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E204Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2054u;
    // 0x3e2054: 0x0  nop
    ctx->pc = 0x3e2054u;
    // NOP
    // 0x3e2058: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E2058u;
    {
        const bool branch_taken_0x3e2058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2058) {
            ctx->pc = 0x3E208Cu;
            goto label_3e208c;
        }
    }
    ctx->pc = 0x3E2060u;
    // 0x3e2060: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E2060u;
    {
        const bool branch_taken_0x3e2060 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2060) {
            ctx->pc = 0x3E208Cu;
            goto label_3e208c;
        }
    }
    ctx->pc = 0x3E2068u;
    // 0x3e2068: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e2068u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e206c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3e206cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3e2070: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E2070u;
    {
        const bool branch_taken_0x3e2070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2070u;
        // 0x3e2074: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2070) {
            ctx->pc = 0x3E208Cu;
            goto label_3e208c;
        }
    }
    ctx->pc = 0x3E2078u;
    // 0x3e2078: 0x90a300a0  lbu         $v1, 0xA0($a1)
    ctx->pc = 0x3e2078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x3e207c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E207Cu;
    {
        const bool branch_taken_0x3e207c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E207Cu;
        // 0x3e2080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e207c) {
            ctx->pc = 0x3E2094u;
            goto label_3e2094;
        }
    }
    ctx->pc = 0x3E2084u;
    // 0x3e2084: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2084u;
        // 0x3e2088: 0xdca20090  ld          $v0, 0x90($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E208Cu;
label_3e208c:
    // 0x3e208c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E208Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E208Cu;
        // 0x3e2090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E208Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2094u;
label_3e2094:
    // 0x3e2094: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E209Cu;
    // 0x3e209c: 0x0  nop
    ctx->pc = 0x3e209cu;
    // NOP
    // 0x3e20a0: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E20A0u;
    {
        const bool branch_taken_0x3e20a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e20a0) {
            ctx->pc = 0x3E20D4u;
            goto label_3e20d4;
        }
    }
    ctx->pc = 0x3E20A8u;
    // 0x3e20a8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E20A8u;
    {
        const bool branch_taken_0x3e20a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e20a8) {
            ctx->pc = 0x3E20D4u;
            goto label_3e20d4;
        }
    }
    ctx->pc = 0x3E20B0u;
    // 0x3e20b0: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e20b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e20b4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3e20b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3e20b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E20B8u;
    {
        const bool branch_taken_0x3e20b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E20B8u;
        // 0x3e20bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e20b8) {
            ctx->pc = 0x3E20D4u;
            goto label_3e20d4;
        }
    }
    ctx->pc = 0x3E20C0u;
    // 0x3e20c0: 0x90a300a0  lbu         $v1, 0xA0($a1)
    ctx->pc = 0x3e20c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x3e20c4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E20C4u;
    {
        const bool branch_taken_0x3e20c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E20C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E20C4u;
        // 0x3e20c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e20c4) {
            ctx->pc = 0x3E20DCu;
            goto label_3e20dc;
        }
    }
    ctx->pc = 0x3E20CCu;
    // 0x3e20cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E20CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E20CCu;
        // 0x3e20d0: 0xdca20098  ld          $v0, 0x98($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E20CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E20D4u;
label_3e20d4:
    // 0x3e20d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E20D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E20D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E20D4u;
        // 0x3e20d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E20D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E20DCu;
label_3e20dc:
    // 0x3e20dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E20DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E20DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E20E4u;
    // 0x3e20e4: 0x0  nop
    ctx->pc = 0x3e20e4u;
    // NOP
    // 0x3e20e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e20e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e20ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e20ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e20f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e20f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e20f4: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3E20F4u;
    {
        const bool branch_taken_0x3e20f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E20F4u;
        // 0x3e20f8: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e20f4) {
            ctx->pc = 0x3E2180u;
            goto label_3e2180;
        }
    }
    ctx->pc = 0x3E20FCu;
    // 0x3e20fc: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3E20FCu;
    {
        const bool branch_taken_0x3e20fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e20fc) {
            ctx->pc = 0x3E2180u;
            goto label_3e2180;
        }
    }
    ctx->pc = 0x3E2104u;
    // 0x3e2104: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e2104u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e2108: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3e2108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3e210c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3E210Cu;
    {
        const bool branch_taken_0x3e210c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e210c) {
            ctx->pc = 0x3E2180u;
            goto label_3e2180;
        }
    }
    ctx->pc = 0x3E2114u;
    // 0x3e2114: 0xdcb00090  ld          $s0, 0x90($a1)
    ctx->pc = 0x3e2114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x3e2118: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3E2118u;
    {
        const bool branch_taken_0x3e2118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2118) {
            ctx->pc = 0x3E2180u;
            goto label_3e2180;
        }
    }
    ctx->pc = 0x3E2120u;
    // 0x3e2120: 0xdca40098  ld          $a0, 0x98($a1)
    ctx->pc = 0x3e2120u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 152)));
    // 0x3e2124: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E2124u;
    {
        const bool branch_taken_0x3e2124 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3E2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2124u;
        // 0x3e2128: 0x4107a  dsrl        $v0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2124) {
            ctx->pc = 0x3E213Cu;
            goto label_3e213c;
        }
    }
    ctx->pc = 0x3E212Cu;
    // 0x3e212c: 0xc0beb04  jal         func_2FAC10
    ctx->pc = 0x3E212Cu;
    SET_GPR_U32(ctx, 31, 0x3E2134u);
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x3E212Cu, 0x3E2134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2134u;
label_3e2134:
    // 0x3e2134: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E2134u;
    {
        const bool branch_taken_0x3e2134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2134u;
        // 0x3e2138: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2134) {
            ctx->pc = 0x3E214Cu;
            goto label_3e214c;
        }
    }
    ctx->pc = 0x3E213Cu;
label_3e213c:
    // 0x3e213c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x3e213cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3e2140: 0xc0beb04  jal         func_2FAC10
    ctx->pc = 0x3E2140u;
    SET_GPR_U32(ctx, 31, 0x3E2148u);
    ctx->pc = 0x3E2144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2140u;
    // 0x3e2144: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x3E2140u, 0x3E2148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2148u;
label_3e2148:
    // 0x3e2148: 0x46000500  add.s       $f20, $f0, $f0
    ctx->pc = 0x3e2148u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3e214c:
    // 0x3e214c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E214Cu;
    {
        const bool branch_taken_0x3e214c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3E2150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E214Cu;
        // 0x3e2150: 0x10107a  dsrl        $v0, $s0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e214c) {
            ctx->pc = 0x3E2164u;
            goto label_3e2164;
        }
    }
    ctx->pc = 0x3E2154u;
    // 0x3e2154: 0xc0beb04  jal         func_2FAC10
    ctx->pc = 0x3E2154u;
    SET_GPR_U32(ctx, 31, 0x3E215Cu);
    ctx->pc = 0x3E2158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2154u;
    // 0x3e2158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x3E2154u, 0x3E215Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E215Cu;
label_3e215c:
    // 0x3e215c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E215Cu;
    {
        const bool branch_taken_0x3e215c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e215c) {
            ctx->pc = 0x3E2174u;
            goto label_3e2174;
        }
    }
    ctx->pc = 0x3E2164u;
label_3e2164:
    // 0x3e2164: 0x32040001  andi        $a0, $s0, 0x1
    ctx->pc = 0x3e2164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e2168: 0xc0beb04  jal         func_2FAC10
    ctx->pc = 0x3E2168u;
    SET_GPR_U32(ctx, 31, 0x3E2170u);
    ctx->pc = 0x3E216Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2168u;
    // 0x3e216c: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x3E2168u, 0x3E2170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2170u;
label_3e2170:
    // 0x3e2170: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3e2170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3e2174:
    // 0x3e2174: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x3e2174u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x3e2178: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3E2178u;
    {
        const bool branch_taken_0x3e2178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2178u;
        // 0x3e217c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2178) {
            ctx->pc = 0x3E2188u;
            goto label_3e2188;
        }
    }
    ctx->pc = 0x3E2180u;
label_3e2180:
    // 0x3e2180: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e2180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2184: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e2184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e2188:
    // 0x3e2188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e2188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e218c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3e218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3e2190: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2190u;
        // 0x3e2194: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2198u;
    // 0x3e2198: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E2198u;
    {
        const bool branch_taken_0x3e2198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2198) {
            ctx->pc = 0x3E21CCu;
            goto label_3e21cc;
        }
    }
    ctx->pc = 0x3E21A0u;
    // 0x3e21a0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E21A0u;
    {
        const bool branch_taken_0x3e21a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e21a0) {
            ctx->pc = 0x3E21CCu;
            goto label_3e21cc;
        }
    }
    ctx->pc = 0x3E21A8u;
    // 0x3e21a8: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e21a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e21ac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3e21acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3e21b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E21B0u;
    {
        const bool branch_taken_0x3e21b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e21b0) {
            ctx->pc = 0x3E21CCu;
            goto label_3e21cc;
        }
    }
    ctx->pc = 0x3E21B8u;
    // 0x3e21b8: 0x90a20088  lbu         $v0, 0x88($a1)
    ctx->pc = 0x3e21b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x3e21bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E21BCu;
    {
        const bool branch_taken_0x3e21bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E21C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E21BCu;
        // 0x3e21c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e21bc) {
            ctx->pc = 0x3E21D4u;
            goto label_3e21d4;
        }
    }
    ctx->pc = 0x3E21C4u;
    // 0x3e21c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E21C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E21C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E21C4u;
        // 0x3e21c8: 0xdca20078  ld          $v0, 0x78($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E21C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E21CCu;
label_3e21cc:
    // 0x3e21cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E21CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E21D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E21CCu;
        // 0x3e21d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E21CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E21D4u;
label_3e21d4:
    // 0x3e21d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E21D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E21D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E21DCu;
    // 0x3e21dc: 0x0  nop
    ctx->pc = 0x3e21dcu;
    // NOP
    // 0x3e21e0: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E21E0u;
    {
        const bool branch_taken_0x3e21e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e21e0) {
            ctx->pc = 0x3E2214u;
            goto label_3e2214;
        }
    }
    ctx->pc = 0x3E21E8u;
    // 0x3e21e8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E21E8u;
    {
        const bool branch_taken_0x3e21e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e21e8) {
            ctx->pc = 0x3E2214u;
            goto label_3e2214;
        }
    }
    ctx->pc = 0x3E21F0u;
    // 0x3e21f0: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e21f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e21f4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3e21f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3e21f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E21F8u;
    {
        const bool branch_taken_0x3e21f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e21f8) {
            ctx->pc = 0x3E2214u;
            goto label_3e2214;
        }
    }
    ctx->pc = 0x3E2200u;
    // 0x3e2200: 0x90a20088  lbu         $v0, 0x88($a1)
    ctx->pc = 0x3e2200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x3e2204: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E2204u;
    {
        const bool branch_taken_0x3e2204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2204u;
        // 0x3e2208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2204) {
            ctx->pc = 0x3E221Cu;
            goto label_3e221c;
        }
    }
    ctx->pc = 0x3E220Cu;
    // 0x3e220c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E220Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E220Cu;
        // 0x3e2210: 0xdca20080  ld          $v0, 0x80($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E220Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2214u;
label_3e2214:
    // 0x3e2214: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2214u;
        // 0x3e2218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E221Cu;
label_3e221c:
    // 0x3e221c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E221Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E221Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2224u;
    // 0x3e2224: 0x0  nop
    ctx->pc = 0x3e2224u;
    // NOP
    // 0x3e2228: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E2228u;
    {
        const bool branch_taken_0x3e2228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2228) {
            ctx->pc = 0x3E225Cu;
            goto label_3e225c;
        }
    }
    ctx->pc = 0x3E2230u;
    // 0x3e2230: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E2230u;
    {
        const bool branch_taken_0x3e2230 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2230) {
            ctx->pc = 0x3E225Cu;
            goto label_3e225c;
        }
    }
    ctx->pc = 0x3E2238u;
    // 0x3e2238: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e2238u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e223c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3e223cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3e2240: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E2240u;
    {
        const bool branch_taken_0x3e2240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2240u;
        // 0x3e2244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2240) {
            ctx->pc = 0x3E225Cu;
            goto label_3e225c;
        }
    }
    ctx->pc = 0x3E2248u;
    // 0x3e2248: 0x90a30088  lbu         $v1, 0x88($a1)
    ctx->pc = 0x3e2248u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x3e224c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E224Cu;
    {
        const bool branch_taken_0x3e224c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E2250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E224Cu;
        // 0x3e2250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e224c) {
            ctx->pc = 0x3E2264u;
            goto label_3e2264;
        }
    }
    ctx->pc = 0x3E2254u;
    // 0x3e2254: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2254u;
        // 0x3e2258: 0xdca20078  ld          $v0, 0x78($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E225Cu;
label_3e225c:
    // 0x3e225c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E225Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E225Cu;
        // 0x3e2260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E225Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2264u;
label_3e2264:
    // 0x3e2264: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E226Cu;
    // 0x3e226c: 0x0  nop
    ctx->pc = 0x3e226cu;
    // NOP
    // 0x3e2270: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E2270u;
    {
        const bool branch_taken_0x3e2270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2270) {
            ctx->pc = 0x3E22A4u;
            goto label_3e22a4;
        }
    }
    ctx->pc = 0x3E2278u;
    // 0x3e2278: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E2278u;
    {
        const bool branch_taken_0x3e2278 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2278) {
            ctx->pc = 0x3E22A4u;
            goto label_3e22a4;
        }
    }
    ctx->pc = 0x3E2280u;
    // 0x3e2280: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e2280u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e2284: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3e2284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3e2288: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E2288u;
    {
        const bool branch_taken_0x3e2288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2288u;
        // 0x3e228c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2288) {
            ctx->pc = 0x3E22A4u;
            goto label_3e22a4;
        }
    }
    ctx->pc = 0x3E2290u;
    // 0x3e2290: 0x90a30088  lbu         $v1, 0x88($a1)
    ctx->pc = 0x3e2290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x3e2294: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E2294u;
    {
        const bool branch_taken_0x3e2294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E2298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2294u;
        // 0x3e2298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2294) {
            ctx->pc = 0x3E22ACu;
            goto label_3e22ac;
        }
    }
    ctx->pc = 0x3E229Cu;
    // 0x3e229c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E229Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E22A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E229Cu;
        // 0x3e22a0: 0xdca20080  ld          $v0, 0x80($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E229Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E22A4u;
label_3e22a4:
    // 0x3e22a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E22A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E22A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E22A4u;
        // 0x3e22a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E22A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E22ACu;
label_3e22ac:
    // 0x3e22ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3E22ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E22ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E22B4u;
    // 0x3e22b4: 0x0  nop
    ctx->pc = 0x3e22b4u;
    // NOP
    // 0x3e22b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E22B8u;
    {
        const bool branch_taken_0x3e22b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E22BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E22B8u;
        // 0x3e22bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e22b8) {
            ctx->pc = 0x3E22C8u;
            goto label_3e22c8;
        }
    }
    ctx->pc = 0x3E22C0u;
    // 0x3e22c0: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3E22C0u;
    {
        const bool branch_taken_0x3e22c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e22c0) {
            ctx->pc = 0x3E22C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E22C0u;
            // 0x3e22c4: 0x24a20030  addiu       $v0, $a1, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E22C8u;
            goto label_3e22c8;
        }
    }
    ctx->pc = 0x3E22C8u;
label_3e22c8:
    // 0x3e22c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E22C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E22C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E22D0u;
    // 0x3e22d0: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E22D0u;
    {
        const bool branch_taken_0x3e22d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e22d0) {
            ctx->pc = 0x3E2304u;
            goto label_3e2304;
        }
    }
    ctx->pc = 0x3E22D8u;
    // 0x3e22d8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E22D8u;
    {
        const bool branch_taken_0x3e22d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e22d8) {
            ctx->pc = 0x3E2304u;
            goto label_3e2304;
        }
    }
    ctx->pc = 0x3E22E0u;
    // 0x3e22e0: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e22e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e22e4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3e22e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3e22e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E22E8u;
    {
        const bool branch_taken_0x3e22e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e22e8) {
            ctx->pc = 0x3E2304u;
            goto label_3e2304;
        }
    }
    ctx->pc = 0x3E22F0u;
    // 0x3e22f0: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E22F0u;
    {
        const bool branch_taken_0x3e22f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E22F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E22F0u;
        // 0x3e22f4: 0x24a3006a  addiu       $v1, $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e22f0) {
            ctx->pc = 0x3E2304u;
            goto label_3e2304;
        }
    }
    ctx->pc = 0x3E22F8u;
    // 0x3e22f8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3e22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3e22fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E22FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E22FCu;
        // 0x3e2300: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E22FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2304u;
label_3e2304:
    // 0x3e2304: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2304u;
        // 0x3e2308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E230Cu;
    // 0x3e230c: 0x0  nop
    ctx->pc = 0x3e230cu;
    // NOP
    // 0x3e2310: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3e2310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3e2314: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3e2314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3e2318: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3e2318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3e231c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e231cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2320: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3e2320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3e2324: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3e2324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2328: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3e2328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3e232c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3e232cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2330: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3e2330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3e2334: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3e2334u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2338: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3e2338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3e233c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x3e233cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2340: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3e2340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3e2344: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x3e2344u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2348: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3e2348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3e234c: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x3e234cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2350: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3e2350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3e2354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e2354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e2358: 0x8fb700a0  lw          $s7, 0xA0($sp)
    ctx->pc = 0x3e2358u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3e235c: 0x10800031  beqz        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3E235Cu;
    {
        const bool branch_taken_0x3e235c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E235Cu;
        // 0x3e2360: 0x8fbe00a8  lw          $fp, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e235c) {
            ctx->pc = 0x3E2424u;
            goto label_3e2424;
        }
    }
    ctx->pc = 0x3E2364u;
    // 0x3e2364: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3E2364u;
    {
        const bool branch_taken_0x3e2364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2364u;
        // 0x3e2368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2364) {
            ctx->pc = 0x3E2428u;
            goto label_3e2428;
        }
    }
    ctx->pc = 0x3E236Cu;
    // 0x3e236c: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3e236cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3e2370: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3e2370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3e2374: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3E2374u;
    {
        const bool branch_taken_0x3e2374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2374u;
        // 0x3e2378: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2374) {
            ctx->pc = 0x3E2428u;
            goto label_3e2428;
        }
    }
    ctx->pc = 0x3E237Cu;
    // 0x3e237c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E237Cu;
    {
        const bool branch_taken_0x3e237c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e237c) {
            ctx->pc = 0x3E2390u;
            goto label_3e2390;
        }
    }
    ctx->pc = 0x3E2384u;
    // 0x3e2384: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3E2384u;
    SET_GPR_U32(ctx, 31, 0x3E238Cu);
    ctx->pc = 0x3E2388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2384u;
    // 0x3e2388: 0xc60c00a8  lwc1        $f12, 0xA8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3E2384u, 0x3E238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E238Cu;
label_3e238c:
    // 0x3e238c: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x3e238cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_3e2390:
    // 0x3e2390: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2390u;
    {
        const bool branch_taken_0x3e2390 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2390) {
            ctx->pc = 0x3E23A4u;
            goto label_3e23a4;
        }
    }
    ctx->pc = 0x3E2398u;
    // 0x3e2398: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3E2398u;
    SET_GPR_U32(ctx, 31, 0x3E23A0u);
    ctx->pc = 0x3E239Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2398u;
    // 0x3e239c: 0xc60c00ac  lwc1        $f12, 0xAC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3E2398u, 0x3E23A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E23A0u;
label_3e23a0:
    // 0x3e23a0: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x3e23a0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_3e23a4:
    // 0x3e23a4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E23A4u;
    {
        const bool branch_taken_0x3e23a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e23a4) {
            ctx->pc = 0x3E23B8u;
            goto label_3e23b8;
        }
    }
    ctx->pc = 0x3E23ACu;
    // 0x3e23ac: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3E23ACu;
    SET_GPR_U32(ctx, 31, 0x3E23B4u);
    ctx->pc = 0x3E23B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E23ACu;
    // 0x3e23b0: 0xc60c00b0  lwc1        $f12, 0xB0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3E23ACu, 0x3E23B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E23B4u;
label_3e23b4:
    // 0x3e23b4: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x3e23b4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
label_3e23b8:
    // 0x3e23b8: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E23B8u;
    {
        const bool branch_taken_0x3e23b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e23b8) {
            ctx->pc = 0x3E23CCu;
            goto label_3e23cc;
        }
    }
    ctx->pc = 0x3E23C0u;
    // 0x3e23c0: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3E23C0u;
    SET_GPR_U32(ctx, 31, 0x3E23C8u);
    ctx->pc = 0x3E23C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E23C0u;
    // 0x3e23c4: 0xc60c00b4  lwc1        $f12, 0xB4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3E23C0u, 0x3E23C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E23C8u;
label_3e23c8:
    // 0x3e23c8: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x3e23c8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_3e23cc:
    // 0x3e23cc: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E23CCu;
    {
        const bool branch_taken_0x3e23cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e23cc) {
            ctx->pc = 0x3E23E0u;
            goto label_3e23e0;
        }
    }
    ctx->pc = 0x3E23D4u;
    // 0x3e23d4: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3E23D4u;
    SET_GPR_U32(ctx, 31, 0x3E23DCu);
    ctx->pc = 0x3E23D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E23D4u;
    // 0x3e23d8: 0xc60c00b8  lwc1        $f12, 0xB8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3E23D4u, 0x3E23DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E23DCu;
label_3e23dc:
    // 0x3e23dc: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x3e23dcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
label_3e23e0:
    // 0x3e23e0: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E23E0u;
    {
        const bool branch_taken_0x3e23e0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e23e0) {
            ctx->pc = 0x3E23F4u;
            goto label_3e23f4;
        }
    }
    ctx->pc = 0x3E23E8u;
    // 0x3e23e8: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3E23E8u;
    SET_GPR_U32(ctx, 31, 0x3E23F0u);
    ctx->pc = 0x3E23ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E23E8u;
    // 0x3e23ec: 0xc60c00bc  lwc1        $f12, 0xBC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3E23E8u, 0x3E23F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E23F0u;
label_3e23f0:
    // 0x3e23f0: 0xfec20000  sd          $v0, 0x0($s6)
    ctx->pc = 0x3e23f0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 2));
label_3e23f4:
    // 0x3e23f4: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E23F4u;
    {
        const bool branch_taken_0x3e23f4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e23f4) {
            ctx->pc = 0x3E2408u;
            goto label_3e2408;
        }
    }
    ctx->pc = 0x3E23FCu;
    // 0x3e23fc: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3E23FCu;
    SET_GPR_U32(ctx, 31, 0x3E2404u);
    ctx->pc = 0x3E2400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E23FCu;
    // 0x3e2400: 0xc60c00c0  lwc1        $f12, 0xC0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3E23FCu, 0x3E2404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2404u;
label_3e2404:
    // 0x3e2404: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x3e2404u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
label_3e2408:
    // 0x3e2408: 0x53c00007  beql        $fp, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E2408u;
    {
        const bool branch_taken_0x3e2408 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2408) {
            ctx->pc = 0x3E240Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E2408u;
            // 0x3e240c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E2428u;
            goto label_3e2428;
        }
    }
    ctx->pc = 0x3E2410u;
    // 0x3e2410: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3E2410u;
    SET_GPR_U32(ctx, 31, 0x3E2418u);
    ctx->pc = 0x3E2414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2410u;
    // 0x3e2414: 0xc60c00c4  lwc1        $f12, 0xC4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3E2410u, 0x3E2418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2418u;
label_3e2418:
    // 0x3e2418: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x3e2418u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x3e241c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E241Cu;
    {
        const bool branch_taken_0x3e241c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E241Cu;
        // 0x3e2420: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e241c) {
            ctx->pc = 0x3E2428u;
            goto label_3e2428;
        }
    }
    ctx->pc = 0x3E2424u;
label_3e2424:
    // 0x3e2424: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e2424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2428:
    // 0x3e2428: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3e2428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3e242c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3e242cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3e2430: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3e2430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3e2434: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3e2434u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e2438: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3e2438u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e243c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3e243cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e2440: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3e2440u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e2444: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3e2444u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e2448: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3e2448u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e244c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e244cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2450: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2450u;
        // 0x3e2454: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2458u;
    // 0x3e2458: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3e2458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e245c: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3E245Cu;
    {
        const bool branch_taken_0x3e245c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E245Cu;
        // 0x3e2460: 0x8fac0008  lw          $t4, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e245c) {
            ctx->pc = 0x3E2504u;
            goto label_3e2504;
        }
    }
    ctx->pc = 0x3E2464u;
    // 0x3e2464: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3E2464u;
    {
        const bool branch_taken_0x3e2464 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2464) {
            ctx->pc = 0x3E2504u;
            goto label_3e2504;
        }
    }
    ctx->pc = 0x3E246Cu;
    // 0x3e246c: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e246cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e2470: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3e2470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3e2474: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3E2474u;
    {
        const bool branch_taken_0x3e2474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2474) {
            ctx->pc = 0x3E2504u;
            goto label_3e2504;
        }
    }
    ctx->pc = 0x3E247Cu;
    // 0x3e247c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E247Cu;
    {
        const bool branch_taken_0x3e247c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e247c) {
            ctx->pc = 0x3E248Cu;
            goto label_3e248c;
        }
    }
    ctx->pc = 0x3E2484u;
    // 0x3e2484: 0xdca20150  ld          $v0, 0x150($a1)
    ctx->pc = 0x3e2484u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x3e2488: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x3e2488u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_3e248c:
    // 0x3e248c: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E248Cu;
    {
        const bool branch_taken_0x3e248c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e248c) {
            ctx->pc = 0x3E249Cu;
            goto label_3e249c;
        }
    }
    ctx->pc = 0x3E2494u;
    // 0x3e2494: 0xdca20158  ld          $v0, 0x158($a1)
    ctx->pc = 0x3e2494u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 344)));
    // 0x3e2498: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x3e2498u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_3e249c:
    // 0x3e249c: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E249Cu;
    {
        const bool branch_taken_0x3e249c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e249c) {
            ctx->pc = 0x3E24ACu;
            goto label_3e24ac;
        }
    }
    ctx->pc = 0x3E24A4u;
    // 0x3e24a4: 0xdca20160  ld          $v0, 0x160($a1)
    ctx->pc = 0x3e24a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x3e24a8: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x3e24a8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
label_3e24ac:
    // 0x3e24ac: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E24ACu;
    {
        const bool branch_taken_0x3e24ac = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e24ac) {
            ctx->pc = 0x3E24BCu;
            goto label_3e24bc;
        }
    }
    ctx->pc = 0x3E24B4u;
    // 0x3e24b4: 0xdca20168  ld          $v0, 0x168($a1)
    ctx->pc = 0x3e24b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 360)));
    // 0x3e24b8: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x3e24b8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
label_3e24bc:
    // 0x3e24bc: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E24BCu;
    {
        const bool branch_taken_0x3e24bc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e24bc) {
            ctx->pc = 0x3E24CCu;
            goto label_3e24cc;
        }
    }
    ctx->pc = 0x3E24C4u;
    // 0x3e24c4: 0xdca20170  ld          $v0, 0x170($a1)
    ctx->pc = 0x3e24c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 368)));
    // 0x3e24c8: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x3e24c8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_3e24cc:
    // 0x3e24cc: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E24CCu;
    {
        const bool branch_taken_0x3e24cc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e24cc) {
            ctx->pc = 0x3E24DCu;
            goto label_3e24dc;
        }
    }
    ctx->pc = 0x3E24D4u;
    // 0x3e24d4: 0xdca20178  ld          $v0, 0x178($a1)
    ctx->pc = 0x3e24d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 376)));
    // 0x3e24d8: 0xfd620000  sd          $v0, 0x0($t3)
    ctx->pc = 0x3e24d8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 2));
label_3e24dc:
    // 0x3e24dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E24DCu;
    {
        const bool branch_taken_0x3e24dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e24dc) {
            ctx->pc = 0x3E24ECu;
            goto label_3e24ec;
        }
    }
    ctx->pc = 0x3E24E4u;
    // 0x3e24e4: 0xdca20180  ld          $v0, 0x180($a1)
    ctx->pc = 0x3e24e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 384)));
    // 0x3e24e8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x3e24e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_3e24ec:
    // 0x3e24ec: 0x11800003  beqz        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E24ECu;
    {
        const bool branch_taken_0x3e24ec = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e24ec) {
            ctx->pc = 0x3E24FCu;
            goto label_3e24fc;
        }
    }
    ctx->pc = 0x3E24F4u;
    // 0x3e24f4: 0xdca20188  ld          $v0, 0x188($a1)
    ctx->pc = 0x3e24f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 392)));
    // 0x3e24f8: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x3e24f8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
label_3e24fc:
    // 0x3e24fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E24FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E24FCu;
        // 0x3e2500: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E24FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2504u;
label_3e2504:
    // 0x3e2504: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2504u;
        // 0x3e2508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E250Cu;
    // 0x3e250c: 0x0  nop
    ctx->pc = 0x3e250cu;
    // NOP
    // 0x3e2510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e2510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e2514: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e2514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e2518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e2518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e251c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E251Cu;
    {
        const bool branch_taken_0x3e251c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E251Cu;
        // 0x3e2520: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e251c) {
            ctx->pc = 0x3E2560u;
            goto label_3e2560;
        }
    }
    ctx->pc = 0x3E2524u;
    // 0x3e2524: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x3E2524u;
    {
        const bool branch_taken_0x3e2524 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2524u;
        // 0x3e2528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2524) {
            ctx->pc = 0x3E2564u;
            goto label_3e2564;
        }
    }
    ctx->pc = 0x3E252Cu;
    // 0x3e252c: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e252cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e2530: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e2530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3e2534: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3e2534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3e2538: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e2538u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e253c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E253Cu;
    {
        const bool branch_taken_0x3e253c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e253c) {
            ctx->pc = 0x3E2540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E253Cu;
            // 0x3e2540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E2564u;
            goto label_3e2564;
        }
    }
    ctx->pc = 0x3E2544u;
    // 0x3e2544: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E2544u;
    {
        const bool branch_taken_0x3e2544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2544) {
            ctx->pc = 0x3E2548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E2544u;
            // 0x3e2548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E2564u;
            goto label_3e2564;
        }
    }
    ctx->pc = 0x3E254Cu;
    // 0x3e254c: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3E254Cu;
    SET_GPR_U32(ctx, 31, 0x3E2554u);
    ctx->pc = 0x3E2550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E254Cu;
    // 0x3e2550: 0xc4ac0038  lwc1        $f12, 0x38($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3E254Cu, 0x3E2554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2554u;
label_3e2554:
    // 0x3e2554: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x3e2554u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x3e2558: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E2558u;
    {
        const bool branch_taken_0x3e2558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2558u;
        // 0x3e255c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2558) {
            ctx->pc = 0x3E2564u;
            goto label_3e2564;
        }
    }
    ctx->pc = 0x3E2560u;
label_3e2560:
    // 0x3e2560: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e2560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2564:
    // 0x3e2564: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e2564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e2568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e2568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e256c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E256Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E256Cu;
        // 0x3e2570: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E256Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2574u;
    // 0x3e2574: 0x0  nop
    ctx->pc = 0x3e2574u;
    // NOP
    // 0x3e2578: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x3E2578u;
    {
        const bool branch_taken_0x3e2578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2578) {
            ctx->pc = 0x3E25B4u;
            goto label_3e25b4;
        }
    }
    ctx->pc = 0x3E2580u;
    // 0x3e2580: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x3E2580u;
    {
        const bool branch_taken_0x3e2580 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2580) {
            ctx->pc = 0x3E25B4u;
            goto label_3e25b4;
        }
    }
    ctx->pc = 0x3E2588u;
    // 0x3e2588: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e2588u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e258c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e258cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3e2590: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3e2590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3e2594: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e2594u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e2598: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E2598u;
    {
        const bool branch_taken_0x3e2598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2598) {
            ctx->pc = 0x3E25B4u;
            goto label_3e25b4;
        }
    }
    ctx->pc = 0x3E25A0u;
    // 0x3e25a0: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E25A0u;
    {
        const bool branch_taken_0x3e25a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E25A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E25A0u;
        // 0x3e25a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e25a0) {
            ctx->pc = 0x3E25B4u;
            goto label_3e25b4;
        }
    }
    ctx->pc = 0x3E25A8u;
    // 0x3e25a8: 0xdca30148  ld          $v1, 0x148($a1)
    ctx->pc = 0x3e25a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x3e25ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3E25ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E25ACu;
        // 0x3e25b0: 0xfcc30000  sd          $v1, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E25ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E25B4u;
label_3e25b4:
    // 0x3e25b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E25B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E25B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E25B4u;
        // 0x3e25b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E25B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E25BCu;
    // 0x3e25bc: 0x0  nop
    ctx->pc = 0x3e25bcu;
    // NOP
    // 0x3e25c0: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E25C0u;
    {
        const bool branch_taken_0x3e25c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e25c0) {
            ctx->pc = 0x3E25F4u;
            goto label_3e25f4;
        }
    }
    ctx->pc = 0x3E25C8u;
    // 0x3e25c8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E25C8u;
    {
        const bool branch_taken_0x3e25c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e25c8) {
            ctx->pc = 0x3E25F4u;
            goto label_3e25f4;
        }
    }
    ctx->pc = 0x3E25D0u;
    // 0x3e25d0: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e25d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e25d4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3e25d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3e25d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E25D8u;
    {
        const bool branch_taken_0x3e25d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e25d8) {
            ctx->pc = 0x3E25F4u;
            goto label_3e25f4;
        }
    }
    ctx->pc = 0x3E25E0u;
    // 0x3e25e0: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E25E0u;
    {
        const bool branch_taken_0x3e25e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E25E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E25E0u;
        // 0x3e25e4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e25e0) {
            ctx->pc = 0x3E25F4u;
            goto label_3e25f4;
        }
    }
    ctx->pc = 0x3E25E8u;
    // 0x3e25e8: 0x8ca300a4  lw          $v1, 0xA4($a1)
    ctx->pc = 0x3e25e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
    // 0x3e25ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3E25ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E25F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E25ECu;
        // 0x3e25f0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E25ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E25F4u;
label_3e25f4:
    // 0x3e25f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E25F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E25F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E25F4u;
        // 0x3e25f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E25F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E25FCu;
    // 0x3e25fc: 0x0  nop
    ctx->pc = 0x3e25fcu;
    // NOP
    ctx->pc = 0x3e2600u;
}
