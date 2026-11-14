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

// Function: sub_004B3EA0
// Address: 0x4b3ea0 - 0x4b3f58
void sub_004B3EA0_0x4b3ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3EA0_0x4b3ea0");
#endif

    switch (ctx->pc) {
        case 0x4b3ec0u: goto label_4b3ec0;
        case 0x4b3ed0u: goto label_4b3ed0;
        case 0x4b3eecu: goto label_4b3eec;
        case 0x4b3f3cu: goto label_4b3f3c;
        default: break;
    }

    ctx->pc = 0x4b3ea0u;

    // 0x4b3ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b3ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b3ea4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4b3ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4b3ea8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b3ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b3eac: 0x24a52d60  addiu       $a1, $a1, 0x2D60
    ctx->pc = 0x4b3eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11616));
    // 0x4b3eb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b3eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b3eb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b3eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3eb8: 0xc126852  jal         func_49A148
    ctx->pc = 0x4B3EB8u;
    SET_GPR_U32(ctx, 31, 0x4B3EC0u);
    ctx->pc = 0x4B3EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3EB8u;
    // 0x4b3ebc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A148u, 0x4B3EB8u, 0x4B3EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3EC0u;
label_4b3ec0:
    // 0x4b3ec0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4b3ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4b3ec4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b3ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3ec8: 0xc129894  jal         func_4A6250
    ctx->pc = 0x4B3EC8u;
    SET_GPR_U32(ctx, 31, 0x4B3ED0u);
    ctx->pc = 0x4B3ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3EC8u;
    // 0x4b3ecc: 0x24a5ee00  addiu       $a1, $a1, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6250u, 0x4B3EC8u, 0x4B3ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3ED0u;
label_4b3ed0:
    // 0x4b3ed0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b3ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3ed4: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4B3ED4u;
    {
        const bool branch_taken_0x4b3ed4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3ED4u;
        // 0x4b3ed8: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3ed4) {
            ctx->pc = 0x4B3F44u;
            goto label_4b3f44;
        }
    }
    ctx->pc = 0x4B3EDCu;
    // 0x4b3edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b3edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3ee0: 0x24a52f08  addiu       $a1, $a1, 0x2F08
    ctx->pc = 0x4b3ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12040));
    // 0x4b3ee4: 0xc12986c  jal         func_4A61B0
    ctx->pc = 0x4B3EE4u;
    SET_GPR_U32(ctx, 31, 0x4B3EECu);
    ctx->pc = 0x4B3EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3EE4u;
    // 0x4b3ee8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A61B0u, 0x4B3EE4u, 0x4B3EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3EECu;
label_4b3eec:
    // 0x4b3eec: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x4b3eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x4b3ef0: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x4b3ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
    // 0x4b3ef4: 0x24843c30  addiu       $a0, $a0, 0x3C30
    ctx->pc = 0x4b3ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15408));
    // 0x4b3ef8: 0x24c64470  addiu       $a2, $a2, 0x4470
    ctx->pc = 0x4b3ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17520));
    // 0x4b3efc: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x4b3efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x4b3f00: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x4b3f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x4b3f04: 0x3c07004b  lui         $a3, 0x4B
    ctx->pc = 0x4b3f04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)75 << 16));
    // 0x4b3f08: 0x24424408  addiu       $v0, $v0, 0x4408
    ctx->pc = 0x4b3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17416));
    // 0x4b3f0c: 0x24633ab8  addiu       $v1, $v1, 0x3AB8
    ctx->pc = 0x4b3f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15032));
    // 0x4b3f10: 0x24e74468  addiu       $a3, $a3, 0x4468
    ctx->pc = 0x4b3f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17512));
    // 0x4b3f14: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x4b3f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x4b3f18: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4b3f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x4b3f1c: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x4b3f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
    // 0x4b3f20: 0x24a57c78  addiu       $a1, $a1, 0x7C78
    ctx->pc = 0x4b3f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31864));
    // 0x4b3f24: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x4b3f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x4b3f28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b3f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3f2c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x4b3f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x4b3f30: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4b3f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b3f34: 0xc12993a  jal         func_4A64E8
    ctx->pc = 0x4B3F34u;
    SET_GPR_U32(ctx, 31, 0x4B3F3Cu);
    ctx->pc = 0x4B3F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3F34u;
    // 0x4b3f38: 0xae070018  sw          $a3, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A64E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A64E8u, 0x4B3F34u, 0x4B3F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3F3Cu;
label_4b3f3c:
    // 0x4b3f3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B3F3Cu;
    {
        const bool branch_taken_0x4b3f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3F3Cu;
        // 0x4b3f40: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3f3c) {
            ctx->pc = 0x4B3F48u;
            goto label_4b3f48;
        }
    }
    ctx->pc = 0x4B3F44u;
label_4b3f44:
    // 0x4b3f44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b3f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b3f48:
    // 0x4b3f48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b3f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b3f4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b3f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3f50: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3F50u;
        // 0x4b3f54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3F58u;
}
