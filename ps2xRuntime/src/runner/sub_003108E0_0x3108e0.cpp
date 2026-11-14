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

// Function: sub_003108E0
// Address: 0x3108e0 - 0x310950
void sub_003108E0_0x3108e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003108E0_0x3108e0");
#endif

    switch (ctx->pc) {
        case 0x310914u: goto label_310914;
        case 0x31092cu: goto label_31092c;
        case 0x310934u: goto label_310934;
        default: break;
    }

    ctx->pc = 0x3108e0u;

    // 0x3108e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3108e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3108e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3108e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3108e8: 0x3c11004f  lui         $s1, 0x4F
    ctx->pc = 0x3108e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)79 << 16));
    // 0x3108ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3108ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3108f0: 0x822222b8  lb          $v0, 0x22B8($s1)
    ctx->pc = 0x3108f0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x4F22B8u));
    // 0x3108f4: 0x263222b8  addiu       $s2, $s1, 0x22B8
    ctx->pc = 0x3108f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8888));
    // 0x3108f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3108f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3108fc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3108FCu;
    {
        const bool branch_taken_0x3108fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3108FCu;
        // 0x310900: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3108fc) {
            ctx->pc = 0x310934u;
            goto label_310934;
        }
    }
    ctx->pc = 0x310904u;
    // 0x310904: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x310904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x310908: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x310908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31090c: 0xc0c0bba  jal         func_302EE8
    ctx->pc = 0x31090Cu;
    SET_GPR_U32(ctx, 31, 0x310914u);
    ctx->pc = 0x310910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31090Cu;
    // 0x310910: 0x2484b688  addiu       $a0, $a0, -0x4978 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EE8u, 0x31090Cu, 0x310914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310914u;
label_310914:
    // 0x310914: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x310914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310918: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x310918u;
    {
        const bool branch_taken_0x310918 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x31091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310918u;
        // 0x31091c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310918) {
            ctx->pc = 0x310934u;
            goto label_310934;
        }
    }
    ctx->pc = 0x310920u;
    // 0x310920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x310920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310924: 0xc0c0d4c  jal         func_303530
    ctx->pc = 0x310924u;
    SET_GPR_U32(ctx, 31, 0x31092Cu);
    ctx->pc = 0x310928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310924u;
    // 0x310928: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303530u, 0x310924u, 0x31092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31092Cu;
label_31092c:
    // 0x31092c: 0xc0c0c5e  jal         func_303178
    ctx->pc = 0x31092Cu;
    SET_GPR_U32(ctx, 31, 0x310934u);
    ctx->pc = 0x310930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31092Cu;
    // 0x310930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303178u, 0x31092Cu, 0x310934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310934u;
label_310934:
    // 0x310934: 0x262222b8  addiu       $v0, $s1, 0x22B8
    ctx->pc = 0x310934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8888));
    // 0x310938: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x310938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31093c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31093cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x310940: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x310940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310944: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x310944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310948: 0x3e00008  jr          $ra
    ctx->pc = 0x310948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310948u;
        // 0x31094c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310950u;
}
