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

// Function: sub_00231E50
// Address: 0x231e50 - 0x231f20
void sub_00231E50_0x231e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231E50_0x231e50");
#endif

    switch (ctx->pc) {
        case 0x231e70u: goto label_231e70;
        case 0x231ec8u: goto label_231ec8;
        case 0x231ef0u: goto label_231ef0;
        default: break;
    }

    ctx->pc = 0x231e50u;

    // 0x231e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x231e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x231e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231e58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x231e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x231e5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x231e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x231e60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x231e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231e64: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x231e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231e68: 0xc08c200  jal         func_230800
    ctx->pc = 0x231E68u;
    SET_GPR_U32(ctx, 31, 0x231E70u);
    ctx->pc = 0x230800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230800u, 0x231E68u, 0x231E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E70u;
label_231e70:
    // 0x231e70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x231E70u;
    {
        const bool branch_taken_0x231e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231e70) {
            ctx->pc = 0x231E88u;
            goto label_231e88;
        }
    }
    ctx->pc = 0x231E78u;
    // 0x231e78: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x231e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x231e7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231e80: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x231E80u;
    {
        const bool branch_taken_0x231e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231e80) {
            ctx->pc = 0x231F08u;
            goto label_231f08;
        }
    }
    ctx->pc = 0x231E88u;
label_231e88:
    // 0x231e88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231e8c: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x231e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x231e90: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x231e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x231e94: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x231E94u;
    {
        const bool branch_taken_0x231e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x231e94) {
            ctx->pc = 0x231ED8u;
            goto label_231ed8;
        }
    }
    ctx->pc = 0x231E9Cu;
    // 0x231e9c: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x231e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x231ea0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x231EA0u;
    {
        const bool branch_taken_0x231ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x231ea0) {
            ctx->pc = 0x231EB0u;
            goto label_231eb0;
        }
    }
    ctx->pc = 0x231EA8u;
    // 0x231ea8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x231EA8u;
    {
        const bool branch_taken_0x231ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231ea8) {
            ctx->pc = 0x231F00u;
            goto label_231f00;
        }
    }
    ctx->pc = 0x231EB0u;
label_231eb0:
    // 0x231eb0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x231eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231eb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231eb8: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x231eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x231ebc: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x231ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x231ec0: 0xc08c248  jal         func_230920
    ctx->pc = 0x231EC0u;
    SET_GPR_U32(ctx, 31, 0x231EC8u);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x231EC0u, 0x231EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231EC8u;
label_231ec8:
    // 0x231ec8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x231ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231ecc: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x231eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231ed0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x231ED0u;
    {
        const bool branch_taken_0x231ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231ed0) {
            ctx->pc = 0x231F08u;
            goto label_231f08;
        }
    }
    ctx->pc = 0x231ED8u;
label_231ed8:
    // 0x231ed8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x231ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231edc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231ee0: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x231ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x231ee4: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x231ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x231ee8: 0xc08c1f0  jal         func_2307C0
    ctx->pc = 0x231EE8u;
    SET_GPR_U32(ctx, 31, 0x231EF0u);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x231EE8u, 0x231EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231EF0u;
label_231ef0:
    // 0x231ef0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x231ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231ef4: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x231ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231ef8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x231EF8u;
    {
        const bool branch_taken_0x231ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231ef8) {
            ctx->pc = 0x231F08u;
            goto label_231f08;
        }
    }
    ctx->pc = 0x231F00u;
label_231f00:
    // 0x231f00: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x231f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x231f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231f08:
    // 0x231f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231f0c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x231f0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x231f10: 0x3e00008  jr          $ra
    ctx->pc = 0x231F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231F18u;
    // 0x231f18: 0x0  nop
    ctx->pc = 0x231f18u;
    // NOP
    // 0x231f1c: 0x0  nop
    ctx->pc = 0x231f1cu;
    // NOP
    ctx->pc = 0x231f20u;
}
