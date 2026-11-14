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

// Function: sub_0018F480
// Address: 0x18f480 - 0x18f530
void sub_0018F480_0x18f480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F480_0x18f480");
#endif

    switch (ctx->pc) {
        case 0x18f4a8u: goto label_18f4a8;
        case 0x18f4c8u: goto label_18f4c8;
        case 0x18f4e4u: goto label_18f4e4;
        case 0x18f520u: goto label_18f520;
        default: break;
    }

    ctx->pc = 0x18f480u;

    // 0x18f480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18f480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18f484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f488: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18f488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18f48c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x18f490: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x18f490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f494: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x18f494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x18f498: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18f498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x18f49c: 0x24a55928  addiu       $a1, $a1, 0x5928
    ctx->pc = 0x18f49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22824));
    // 0x18f4a0: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x18F4A0u;
    SET_GPR_U32(ctx, 31, 0x18F4A8u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x18F4A0u, 0x18F4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F4A8u;
label_18f4a8:
    // 0x18f4a8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18F4A8u;
    {
        const bool branch_taken_0x18f4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f4a8) {
            ctx->pc = 0x18F520u;
            goto label_18f520;
        }
    }
    ctx->pc = 0x18F4B0u;
    // 0x18f4b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x18f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f4b4: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x18f4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x18f4b8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18f4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x18f4bc: 0x24a55958  addiu       $a1, $a1, 0x5958
    ctx->pc = 0x18f4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22872));
    // 0x18f4c0: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x18F4C0u;
    SET_GPR_U32(ctx, 31, 0x18F4C8u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x18F4C0u, 0x18F4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F4C8u;
label_18f4c8:
    // 0x18f4c8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x18F4C8u;
    {
        const bool branch_taken_0x18f4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f4c8) {
            ctx->pc = 0x18F520u;
            goto label_18f520;
        }
    }
    ctx->pc = 0x18F4D0u;
    // 0x18f4d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x18f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f4d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f4d8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x18f4d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f4dc: 0xc125d5c  jal         func_497570
    ctx->pc = 0x18F4DCu;
    SET_GPR_U32(ctx, 31, 0x18F4E4u);
    ctx->pc = 0x497570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497570u, 0x18F4DCu, 0x18F4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F4E4u;
label_18f4e4:
    // 0x18f4e4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x18f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f4e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18f4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f4ec: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x18f4ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f4f0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18f4f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18f4f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f4f8: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18F4F8u;
    {
        const bool branch_taken_0x18f4f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18f4f8) {
            ctx->pc = 0x18F520u;
            goto label_18f520;
        }
    }
    ctx->pc = 0x18F500u;
    // 0x18f500: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18f500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18f504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f508: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18f508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f50c: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x18f50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x18f510: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18f510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f514: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x18f514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18f518: 0xc125d14  jal         func_497450
    ctx->pc = 0x18F518u;
    SET_GPR_U32(ctx, 31, 0x18F520u);
    ctx->pc = 0x497450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497450u, 0x18F518u, 0x18F520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F520u;
label_18f520:
    // 0x18f520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f524: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18f524u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18f528: 0x3e00008  jr          $ra
    ctx->pc = 0x18F528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F530u;
}
