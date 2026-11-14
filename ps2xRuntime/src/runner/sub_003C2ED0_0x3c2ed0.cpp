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

// Function: sub_003C2ED0
// Address: 0x3c2ed0 - 0x3c2f38
void sub_003C2ED0_0x3c2ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2ED0_0x3c2ed0");
#endif

    switch (ctx->pc) {
        case 0x3c2f18u: goto label_3c2f18;
        default: break;
    }

    ctx->pc = 0x3c2ed0u;

    // 0x3c2ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c2ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c2ed4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3c2ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3c2ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c2ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c2edc: 0x2451dff0  addiu       $s1, $v0, -0x2010
    ctx->pc = 0x3c2edcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959088));
    // 0x3c2ee0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c2ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3c2ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c2ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c2ee8: 0xac40dff0  sw          $zero, -0x2010($v0)
    ctx->pc = 0x3c2ee8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61DFF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61DFF0u, _value); } while (0);
    // 0x3c2eec: 0xaf80bd8c  sw          $zero, -0x4274($gp)
    ctx->pc = 0x3c2eecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950284), GPR_U32(ctx, 0));
    // 0x3c2ef0: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x3c2ef0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x61DFF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61DFF4u, _value); } while (0);
    // 0x3c2ef4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c2ef4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61DFF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61DFF8u, _value); } while (0);
    // 0x3c2ef8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x3c2ef8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61E004u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E004u, _value); } while (0);
    // 0x3c2efc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3c2efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3c2f00: 0x2442dfd8  addiu       $v0, $v0, -0x2028
    ctx->pc = 0x3c2f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959064));
    // 0x3c2f04: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3c2f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c2f08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c2f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2f0c: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3c2f0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x61DFE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61DFE0u, _value); } while (0);
    // 0x3c2f10: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x3C2F10u;
    SET_GPR_U32(ctx, 31, 0x3C2F18u);
    ctx->pc = 0x3C2F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2F10u;
    // 0x3c2f14: 0xac500004  sw          $s0, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x3C2F10u, 0x3C2F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2F18u;
label_3c2f18:
    // 0x3c2f18: 0xaf82bd88  sw          $v0, -0x4278($gp)
    ctx->pc = 0x3c2f18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950280), GPR_U32(ctx, 2));
    // 0x3c2f1c: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x3c2f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x3c2f20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c2f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c2f24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c2f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c2f28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c2f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c2f2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c2f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c2f30: 0x3e00008  jr          $ra
    ctx->pc = 0x3C2F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2F30u;
        // 0x3c2f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2F38u;
}
