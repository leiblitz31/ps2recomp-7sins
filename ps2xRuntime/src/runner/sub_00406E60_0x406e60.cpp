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

// Function: sub_00406E60
// Address: 0x406e60 - 0x406f08
void sub_00406E60_0x406e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00406E60_0x406e60");
#endif

    switch (ctx->pc) {
        case 0x406ec8u: goto label_406ec8;
        case 0x406ed8u: goto label_406ed8;
        case 0x406ee0u: goto label_406ee0;
        case 0x406ef0u: goto label_406ef0;
        default: break;
    }

    ctx->pc = 0x406e60u;

    // 0x406e60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x406e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x406e64: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x406e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406e68: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x406e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x406e6c: 0x2323a  dsrl        $a2, $v0, 8
    ctx->pc = 0x406e6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> 8);
    // 0x406e70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x406e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406e74: 0x21e3a  dsrl        $v1, $v0, 24
    ctx->pc = 0x406e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 24);
    // 0x406e78: 0x2243a  dsrl        $a0, $v0, 16
    ctx->pc = 0x406e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 16);
    // 0x406e7c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x406e7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x406e80: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x406e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x406e84: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x406e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x406e88: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x406e88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x406e8c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x406e8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x406e90: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x406e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x406e94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x406e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x406e98: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x406e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x406e9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x406e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x406ea0: 0xa3a40001  sb          $a0, 0x1($sp)
    ctx->pc = 0x406ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x406ea4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x406ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406ea8: 0xa3a60002  sb          $a2, 0x2($sp)
    ctx->pc = 0x406ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x406eac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x406eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406eb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x406eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x406eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x406eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406eb8: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x406eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x406ebc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x406ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x406ec0: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x406EC0u;
    SET_GPR_U32(ctx, 31, 0x406EC8u);
    ctx->pc = 0x406EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406EC0u;
    // 0x406ec4: 0xa3a20003  sb          $v0, 0x3($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x406EC0u, 0x406EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406EC8u;
label_406ec8:
    // 0x406ec8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x406ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406ecc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x406eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x406ed0: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x406ED0u;
    SET_GPR_U32(ctx, 31, 0x406ED8u);
    ctx->pc = 0x406ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406ED0u;
    // 0x406ed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x406ED0u, 0x406ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406ED8u;
label_406ed8:
    // 0x406ed8: 0xc0f85de  jal         func_3E1778
    ctx->pc = 0x406ED8u;
    SET_GPR_U32(ctx, 31, 0x406EE0u);
    ctx->pc = 0x406EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406ED8u;
    // 0x406edc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1778u, 0x406ED8u, 0x406EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406EE0u;
label_406ee0:
    // 0x406ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x406ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406ee4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x406ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406ee8: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x406EE8u;
    SET_GPR_U32(ctx, 31, 0x406EF0u);
    ctx->pc = 0x406EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406EE8u;
    // 0x406eec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x406EE8u, 0x406EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406EF0u;
label_406ef0:
    // 0x406ef0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x406ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x406ef4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x406ef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x406ef8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x406ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x406efc: 0x3e00008  jr          $ra
    ctx->pc = 0x406EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x406F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406EFCu;
        // 0x406f00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x406F04u;
    // 0x406f04: 0x0  nop
    ctx->pc = 0x406f04u;
    // NOP
    ctx->pc = 0x406f08u;
}
