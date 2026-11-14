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

// Function: sub_00298AB0
// Address: 0x298ab0 - 0x298b30
void sub_00298AB0_0x298ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298AB0_0x298ab0");
#endif

    switch (ctx->pc) {
        case 0x298ae0u: goto label_298ae0;
        case 0x298af0u: goto label_298af0;
        case 0x298af8u: goto label_298af8;
        case 0x298b0cu: goto label_298b0c;
        default: break;
    }

    ctx->pc = 0x298ab0u;

    // 0x298ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298ab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x298ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x298ab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x298abc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x298abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x298ac0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x298ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298ac4: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x298ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x298ac8: 0x10030012  beq         $zero, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x298AC8u;
    {
        const bool branch_taken_0x298ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x298ac8) {
            ctx->pc = 0x298B14u;
            goto label_298b14;
        }
    }
    ctx->pc = 0x298AD0u;
    // 0x298ad0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x298ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298ad4: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x298ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x298ad8: 0xc123428  jal         func_48D0A0
    ctx->pc = 0x298AD8u;
    SET_GPR_U32(ctx, 31, 0x298AE0u);
    ctx->pc = 0x48D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D0A0u, 0x298AD8u, 0x298AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298AE0u;
label_298ae0:
    // 0x298ae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x298ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ae8: 0xc1066de  jal         func_419B78
    ctx->pc = 0x298AE8u;
    SET_GPR_U32(ctx, 31, 0x298AF0u);
    ctx->pc = 0x419B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B78u, 0x298AE8u, 0x298AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298AF0u;
label_298af0:
    // 0x298af0: 0xc122470  jal         func_4891C0
    ctx->pc = 0x298AF0u;
    SET_GPR_U32(ctx, 31, 0x298AF8u);
    ctx->pc = 0x4891C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891C0u, 0x298AF0u, 0x298AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298AF8u;
label_298af8:
    // 0x298af8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x298af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298afc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x298afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b00: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x298b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x298b04: 0xc123c84  jal         func_48F210
    ctx->pc = 0x298B04u;
    SET_GPR_U32(ctx, 31, 0x298B0Cu);
    ctx->pc = 0x48F210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F210u, 0x298B04u, 0x298B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298B0Cu;
label_298b0c:
    // 0x298b0c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x298b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298b10: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x298b10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
label_298b14:
    // 0x298b14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x298b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298b18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298b1c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x298b1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x298b20: 0x3e00008  jr          $ra
    ctx->pc = 0x298B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298B28u;
    // 0x298b28: 0x0  nop
    ctx->pc = 0x298b28u;
    // NOP
    // 0x298b2c: 0x0  nop
    ctx->pc = 0x298b2cu;
    // NOP
    ctx->pc = 0x298b30u;
}
