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

// Function: sub_003022C8
// Address: 0x3022c8 - 0x302350
void sub_003022C8_0x3022c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003022C8_0x3022c8");
#endif

    switch (ctx->pc) {
        case 0x3022e0u: goto label_3022e0;
        case 0x3022e8u: goto label_3022e8;
        case 0x302308u: goto label_302308;
        case 0x30231cu: goto label_30231c;
        case 0x302338u: goto label_302338;
        default: break;
    }

    ctx->pc = 0x3022c8u;

    // 0x3022c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3022c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3022cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3022ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3022d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3022d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3022d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3022d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3022d8: 0xc0c0876  jal         func_3021D8
    ctx->pc = 0x3022D8u;
    SET_GPR_U32(ctx, 31, 0x3022E0u);
    ctx->pc = 0x3022DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3022D8u;
    // 0x3022dc: 0x3c11004f  lui         $s1, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)79 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3021D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3021D8u, 0x3022D8u, 0x3022E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3022E0u;
label_3022e0:
    // 0x3022e0: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x3022E0u;
    SET_GPR_U32(ctx, 31, 0x3022E8u);
    ctx->pc = 0x3022E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3022E0u;
    // 0x3022e4: 0x8e240c28  lw          $a0, 0xC28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3022E0u, 0x3022E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3022E8u;
label_3022e8:
    // 0x3022e8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3022e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x3022ec: 0x24702840  addiu       $s0, $v1, 0x2840
    ctx->pc = 0x3022ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
    // 0x3022f0: 0x26030200  addiu       $v1, $s0, 0x200
    ctx->pc = 0x3022f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x3022f4: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x3022f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3022f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3022F8u;
    {
        const bool branch_taken_0x3022f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3022FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3022F8u;
        // 0x3022fc: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3022f8) {
            ctx->pc = 0x302330u;
            goto label_302330;
        }
    }
    ctx->pc = 0x302300u;
    // 0x302300: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x302300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x302304: 0x0  nop
    ctx->pc = 0x302304u;
    // NOP
label_302308:
    // 0x302308: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x302308u;
    {
        const bool branch_taken_0x302308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302308) {
            ctx->pc = 0x30230Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302308u;
            // 0x30230c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302324u;
            goto label_302324;
        }
    }
    ctx->pc = 0x302310u;
    // 0x302310: 0x8e240c28  lw          $a0, 0xC28($s1)
    ctx->pc = 0x302310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3112)));
    // 0x302314: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x302314u;
    SET_GPR_U32(ctx, 31, 0x30231Cu);
    ctx->pc = 0x302318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302314u;
    // 0x302318: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x302314u, 0x30231Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30231Cu;
label_30231c:
    // 0x30231c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30231Cu;
    {
        const bool branch_taken_0x30231c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30231Cu;
        // 0x302320: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30231c) {
            ctx->pc = 0x30233Cu;
            goto label_30233c;
        }
    }
    ctx->pc = 0x302324u;
label_302324:
    // 0x302324: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x302324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x302328: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x302328u;
    {
        const bool branch_taken_0x302328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302328) {
            ctx->pc = 0x30232Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302328u;
            // 0x30232c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_302308;
        }
    }
    ctx->pc = 0x302330u;
label_302330:
    // 0x302330: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x302330u;
    SET_GPR_U32(ctx, 31, 0x302338u);
    ctx->pc = 0x302334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302330u;
    // 0x302334: 0x8e240c28  lw          $a0, 0xC28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x302330u, 0x302338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302338u;
label_302338:
    // 0x302338: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x302338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30233c:
    // 0x30233c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30233cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302340: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x302340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x302344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302348: 0x3e00008  jr          $ra
    ctx->pc = 0x302348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302348u;
        // 0x30234c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302350u;
}
