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

// Function: sub_003C2BC8
// Address: 0x3c2bc8 - 0x3c2c20
void sub_003C2BC8_0x3c2bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2BC8_0x3c2bc8");
#endif

    switch (ctx->pc) {
        case 0x3c2bc8u: goto label_3c2bc8;
        case 0x3c2bccu: goto label_3c2bcc;
        case 0x3c2bd0u: goto label_3c2bd0;
        case 0x3c2bd4u: goto label_3c2bd4;
        case 0x3c2bd8u: goto label_3c2bd8;
        case 0x3c2bdcu: goto label_3c2bdc;
        case 0x3c2be0u: goto label_3c2be0;
        case 0x3c2be4u: goto label_3c2be4;
        case 0x3c2be8u: goto label_3c2be8;
        case 0x3c2becu: goto label_3c2bec;
        case 0x3c2bf0u: goto label_3c2bf0;
        case 0x3c2bf4u: goto label_3c2bf4;
        case 0x3c2bf8u: goto label_3c2bf8;
        case 0x3c2bfcu: goto label_3c2bfc;
        case 0x3c2c00u: goto label_3c2c00;
        case 0x3c2c04u: goto label_3c2c04;
        case 0x3c2c08u: goto label_3c2c08;
        case 0x3c2c0cu: goto label_3c2c0c;
        case 0x3c2c10u: goto label_3c2c10;
        case 0x3c2c14u: goto label_3c2c14;
        case 0x3c2c18u: goto label_3c2c18;
        case 0x3c2c1cu: goto label_3c2c1c;
        default: break;
    }

    ctx->pc = 0x3c2bc8u;

label_3c2bc8:
    // 0x3c2bc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c2bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c2bcc:
    // 0x3c2bcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c2bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c2bd0:
    // 0x3c2bd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c2bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c2bd4:
    // 0x3c2bd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c2bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c2bd8:
    // 0x3c2bd8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c2bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3c2bdc:
    // 0x3c2bdc: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x3c2bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3c2be0:
    // 0x3c2be0: 0x8f84bd88  lw          $a0, -0x4278($gp)
    ctx->pc = 0x3c2be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950280)));
label_3c2be4:
    // 0x3c2be4: 0xc0bf6e8  jal         func_2FDBA0
label_3c2be8:
    if (ctx->pc == 0x3C2BE8u) {
        ctx->pc = 0x3C2BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2BE4u;
        // 0x3c2be8: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2BECu;
        goto label_3c2bec;
    }
    ctx->pc = 0x3C2BE4u;
    SET_GPR_U32(ctx, 31, 0x3C2BECu);
    ctx->pc = 0x3C2BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2BE4u;
    // 0x3c2be8: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3C2BE4u, 0x3C2BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2BECu;
label_3c2bec:
    // 0x3c2bec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3c2becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c2bf0:
    // 0x3c2bf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c2bf4:
    // 0x3c2bf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c2bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c2bf8:
    // 0x3c2bf8: 0x60f809  jalr        $v1
label_3c2bfc:
    if (ctx->pc == 0x3C2BFCu) {
        ctx->pc = 0x3C2BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2BF8u;
        // 0x3c2bfc: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2C00u;
        goto label_3c2c00;
    }
    ctx->pc = 0x3C2BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C2C00u);
        ctx->pc = 0x3C2BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2BF8u;
        // 0x3c2bfc: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2BF8u, 0x3C2C00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2C00u;
label_3c2c00:
    // 0x3c2c00: 0xc0bf6e0  jal         func_2FDB80
label_3c2c04:
    if (ctx->pc == 0x3C2C04u) {
        ctx->pc = 0x3C2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C00u;
        // 0x3c2c04: 0x8f84bd88  lw          $a0, -0x4278($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2C08u;
        goto label_3c2c08;
    }
    ctx->pc = 0x3C2C00u;
    SET_GPR_U32(ctx, 31, 0x3C2C08u);
    ctx->pc = 0x3C2C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2C00u;
    // 0x3c2c04: 0x8f84bd88  lw          $a0, -0x4278($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x3C2C00u, 0x3C2C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2C08u;
label_3c2c08:
    // 0x3c2c08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c2c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c2c0c:
    // 0x3c2c0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c2c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c2c10:
    // 0x3c2c10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c2c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c2c14:
    // 0x3c2c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c2c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c2c18:
    // 0x3c2c18: 0x3e00008  jr          $ra
label_3c2c1c:
    if (ctx->pc == 0x3C2C1Cu) {
        ctx->pc = 0x3C2C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C18u;
        // 0x3c2c1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2C20u;
        goto label_fallthrough_0x3c2c18;
    }
    ctx->pc = 0x3C2C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C18u;
        // 0x3c2c1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c2c18:
    ctx->pc = 0x3C2C20u;
}
