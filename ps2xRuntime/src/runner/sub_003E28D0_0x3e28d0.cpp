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

// Function: sub_003E28D0
// Address: 0x3e28d0 - 0x3e2a78
void sub_003E28D0_0x3e28d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E28D0_0x3e28d0");
#endif

    ctx->pc = 0x3e28d0u;

    // 0x3e28d0: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E28D0u;
    {
        const bool branch_taken_0x3e28d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e28d0) {
            ctx->pc = 0x3E2904u;
            goto label_3e2904;
        }
    }
    ctx->pc = 0x3E28D8u;
    // 0x3e28d8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E28D8u;
    {
        const bool branch_taken_0x3e28d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e28d8) {
            ctx->pc = 0x3E2904u;
            goto label_3e2904;
        }
    }
    ctx->pc = 0x3E28E0u;
    // 0x3e28e0: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e28e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e28e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3e28e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3e28e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E28E8u;
    {
        const bool branch_taken_0x3e28e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e28e8) {
            ctx->pc = 0x3E2904u;
            goto label_3e2904;
        }
    }
    ctx->pc = 0x3E28F0u;
    // 0x3e28f0: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E28F0u;
    {
        const bool branch_taken_0x3e28f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E28F0u;
        // 0x3e28f4: 0x24a30054  addiu       $v1, $a1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e28f0) {
            ctx->pc = 0x3E2904u;
            goto label_3e2904;
        }
    }
    ctx->pc = 0x3E28F8u;
    // 0x3e28f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e28f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e28fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E28FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E28FCu;
        // 0x3e2900: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E28FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2904u;
label_3e2904:
    // 0x3e2904: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2904u;
        // 0x3e2908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E290Cu;
    // 0x3e290c: 0x0  nop
    ctx->pc = 0x3e290cu;
    // NOP
    // 0x3e2910: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E2910u;
    {
        const bool branch_taken_0x3e2910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2910) {
            ctx->pc = 0x3E2944u;
            goto label_3e2944;
        }
    }
    ctx->pc = 0x3E2918u;
    // 0x3e2918: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E2918u;
    {
        const bool branch_taken_0x3e2918 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2918) {
            ctx->pc = 0x3E2944u;
            goto label_3e2944;
        }
    }
    ctx->pc = 0x3E2920u;
    // 0x3e2920: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e2920u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e2924: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3e2924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x3e2928: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E2928u;
    {
        const bool branch_taken_0x3e2928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2928) {
            ctx->pc = 0x3E2944u;
            goto label_3e2944;
        }
    }
    ctx->pc = 0x3E2930u;
    // 0x3e2930: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2930u;
    {
        const bool branch_taken_0x3e2930 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2930u;
        // 0x3e2934: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2930) {
            ctx->pc = 0x3E2944u;
            goto label_3e2944;
        }
    }
    ctx->pc = 0x3E2938u;
    // 0x3e2938: 0x90a3003c  lbu         $v1, 0x3C($a1)
    ctx->pc = 0x3e2938u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x3e293c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E293Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E293Cu;
        // 0x3e2940: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E293Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2944u;
label_3e2944:
    // 0x3e2944: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2944u;
        // 0x3e2948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E294Cu;
    // 0x3e294c: 0x0  nop
    ctx->pc = 0x3e294cu;
    // NOP
    // 0x3e2950: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3E2950u;
    {
        const bool branch_taken_0x3e2950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2950) {
            ctx->pc = 0x3E29ACu;
            goto label_3e29ac;
        }
    }
    ctx->pc = 0x3E2958u;
    // 0x3e2958: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E2958u;
    {
        const bool branch_taken_0x3e2958 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2958) {
            ctx->pc = 0x3E29ACu;
            goto label_3e29ac;
        }
    }
    ctx->pc = 0x3E2960u;
    // 0x3e2960: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e2960u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e2964: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x3e2964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x3e2968: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E2968u;
    {
        const bool branch_taken_0x3e2968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2968) {
            ctx->pc = 0x3E29ACu;
            goto label_3e29ac;
        }
    }
    ctx->pc = 0x3E2970u;
    // 0x3e2970: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x3E2970u;
    {
        const bool branch_taken_0x3e2970 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2970) {
            ctx->pc = 0x3E29ACu;
            goto label_3e29ac;
        }
    }
    ctx->pc = 0x3E2978u;
    // 0x3e2978: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E2978u;
    {
        const bool branch_taken_0x3e2978 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2978) {
            ctx->pc = 0x3E29ACu;
            goto label_3e29ac;
        }
    }
    ctx->pc = 0x3E2980u;
    // 0x3e2980: 0x1120000a  beqz        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E2980u;
    {
        const bool branch_taken_0x3e2980 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2980u;
        // 0x3e2984: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2980) {
            ctx->pc = 0x3E29ACu;
            goto label_3e29ac;
        }
    }
    ctx->pc = 0x3E2988u;
    // 0x3e2988: 0x8ca40100  lw          $a0, 0x100($a1)
    ctx->pc = 0x3e2988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x3e298c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x3e298cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x3e2990: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x3e2990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x3e2994: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x3e2994u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x3e2998: 0x8ca40108  lw          $a0, 0x108($a1)
    ctx->pc = 0x3e2998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x3e299c: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x3e299cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x3e29a0: 0x90a30110  lbu         $v1, 0x110($a1)
    ctx->pc = 0x3e29a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x3e29a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E29A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E29A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E29A4u;
        // 0x3e29a8: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E29A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E29ACu;
label_3e29ac:
    // 0x3e29ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3E29ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E29B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E29ACu;
        // 0x3e29b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E29ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E29B4u;
    // 0x3e29b4: 0x0  nop
    ctx->pc = 0x3e29b4u;
    // NOP
    // 0x3e29b8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E29B8u;
    {
        const bool branch_taken_0x3e29b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e29b8) {
            ctx->pc = 0x3E29D8u;
            goto label_3e29d8;
        }
    }
    ctx->pc = 0x3E29C0u;
    // 0x3e29c0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E29C0u;
    {
        const bool branch_taken_0x3e29c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e29c0) {
            ctx->pc = 0x3E29D8u;
            goto label_3e29d8;
        }
    }
    ctx->pc = 0x3E29C8u;
    // 0x3e29c8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E29C8u;
    {
        const bool branch_taken_0x3e29c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e29c8) {
            ctx->pc = 0x3E29D8u;
            goto label_3e29d8;
        }
    }
    ctx->pc = 0x3E29D0u;
    // 0x3e29d0: 0x8ca20114  lw          $v0, 0x114($a1)
    ctx->pc = 0x3e29d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 276)));
    // 0x3e29d4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3e29d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_3e29d8:
    // 0x3e29d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E29D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E29DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E29D8u;
        // 0x3e29dc: 0xdca20118  ld          $v0, 0x118($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E29D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E29E0u;
    // 0x3e29e0: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E29E0u;
    {
        const bool branch_taken_0x3e29e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e29e0) {
            ctx->pc = 0x3E2A24u;
            goto label_3e2a24;
        }
    }
    ctx->pc = 0x3E29E8u;
    // 0x3e29e8: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x3E29E8u;
    {
        const bool branch_taken_0x3e29e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e29e8) {
            ctx->pc = 0x3E2A24u;
            goto label_3e2a24;
        }
    }
    ctx->pc = 0x3E29F0u;
    // 0x3e29f0: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x3e29f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x3e29f4: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3E29F4u;
    {
        const bool branch_taken_0x3e29f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3e29f4) {
            ctx->pc = 0x3E2A24u;
            goto label_3e2a24;
        }
    }
    ctx->pc = 0x3E29FCu;
    // 0x3e29fc: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E29FCu;
    {
        const bool branch_taken_0x3e29fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e29fc) {
            ctx->pc = 0x3E2A0Cu;
            goto label_3e2a0c;
        }
    }
    ctx->pc = 0x3E2A04u;
    // 0x3e2a04: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x3e2a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x3e2a08: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3e2a08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_3e2a0c:
    // 0x3e2a0c: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E2A0Cu;
    {
        const bool branch_taken_0x3e2a0c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2a0c) {
            ctx->pc = 0x3E2A1Cu;
            goto label_3e2a1c;
        }
    }
    ctx->pc = 0x3E2A14u;
    // 0x3e2a14: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x3e2a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x3e2a18: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x3e2a18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_3e2a1c:
    // 0x3e2a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2A1Cu;
        // 0x3e2a20: 0x8ca20040  lw          $v0, 0x40($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2A24u;
label_3e2a24:
    // 0x3e2a24: 0x54e00001  bnel        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3E2A24u;
    {
        const bool branch_taken_0x3e2a24 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e2a24) {
            ctx->pc = 0x3E2A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E2A24u;
            // 0x3e2a28: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E2A2Cu;
            goto label_3e2a2c;
        }
    }
    ctx->pc = 0x3E2A2Cu;
label_3e2a2c:
    // 0x3e2a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2A2Cu;
        // 0x3e2a30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2A34u;
    // 0x3e2a34: 0x0  nop
    ctx->pc = 0x3e2a34u;
    // NOP
    // 0x3e2a38: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E2A38u;
    {
        const bool branch_taken_0x3e2a38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2a38) {
            ctx->pc = 0x3E2A6Cu;
            goto label_3e2a6c;
        }
    }
    ctx->pc = 0x3E2A40u;
    // 0x3e2a40: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E2A40u;
    {
        const bool branch_taken_0x3e2a40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2a40) {
            ctx->pc = 0x3E2A6Cu;
            goto label_3e2a6c;
        }
    }
    ctx->pc = 0x3E2A48u;
    // 0x3e2a48: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e2a48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e2a4c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3e2a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3e2a50: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E2A50u;
    {
        const bool branch_taken_0x3e2a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2a50) {
            ctx->pc = 0x3E2A6Cu;
            goto label_3e2a6c;
        }
    }
    ctx->pc = 0x3E2A58u;
    // 0x3e2a58: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2A58u;
    {
        const bool branch_taken_0x3e2a58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2A58u;
        // 0x3e2a5c: 0x24a3004c  addiu       $v1, $a1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2a58) {
            ctx->pc = 0x3E2A6Cu;
            goto label_3e2a6c;
        }
    }
    ctx->pc = 0x3E2A60u;
    // 0x3e2a60: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x3e2a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3e2a64: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2A64u;
        // 0x3e2a68: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2A6Cu;
label_3e2a6c:
    // 0x3e2a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2A6Cu;
        // 0x3e2a70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2A74u;
    // 0x3e2a74: 0x0  nop
    ctx->pc = 0x3e2a74u;
    // NOP
    ctx->pc = 0x3e2a78u;
}
