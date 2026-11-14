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

// Function: sub_00254F70
// Address: 0x254f70 - 0x255020
void sub_00254F70_0x254f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254F70_0x254f70");
#endif

    switch (ctx->pc) {
        case 0x254f70u: goto label_254f70;
        case 0x254f74u: goto label_254f74;
        case 0x254f78u: goto label_254f78;
        case 0x254f7cu: goto label_254f7c;
        case 0x254f80u: goto label_254f80;
        case 0x254f84u: goto label_254f84;
        case 0x254f88u: goto label_254f88;
        case 0x254f8cu: goto label_254f8c;
        case 0x254f90u: goto label_254f90;
        case 0x254f94u: goto label_254f94;
        case 0x254f98u: goto label_254f98;
        case 0x254f9cu: goto label_254f9c;
        case 0x254fa0u: goto label_254fa0;
        case 0x254fa4u: goto label_254fa4;
        case 0x254fa8u: goto label_254fa8;
        case 0x254facu: goto label_254fac;
        case 0x254fb0u: goto label_254fb0;
        case 0x254fb4u: goto label_254fb4;
        case 0x254fb8u: goto label_254fb8;
        case 0x254fbcu: goto label_254fbc;
        case 0x254fc0u: goto label_254fc0;
        case 0x254fc4u: goto label_254fc4;
        case 0x254fc8u: goto label_254fc8;
        case 0x254fccu: goto label_254fcc;
        case 0x254fd0u: goto label_254fd0;
        case 0x254fd4u: goto label_254fd4;
        case 0x254fd8u: goto label_254fd8;
        case 0x254fdcu: goto label_254fdc;
        case 0x254fe0u: goto label_254fe0;
        case 0x254fe4u: goto label_254fe4;
        case 0x254fe8u: goto label_254fe8;
        case 0x254fecu: goto label_254fec;
        case 0x254ff0u: goto label_254ff0;
        case 0x254ff4u: goto label_254ff4;
        case 0x254ff8u: goto label_254ff8;
        case 0x254ffcu: goto label_254ffc;
        case 0x255000u: goto label_255000;
        case 0x255004u: goto label_255004;
        case 0x255008u: goto label_255008;
        case 0x25500cu: goto label_25500c;
        case 0x255010u: goto label_255010;
        case 0x255014u: goto label_255014;
        case 0x255018u: goto label_255018;
        case 0x25501cu: goto label_25501c;
        default: break;
    }

    ctx->pc = 0x254f70u;

label_254f70:
    // 0x254f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_254f74:
    // 0x254f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_254f78:
    // 0x254f78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x254f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_254f7c:
    // 0x254f7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x254f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_254f80:
    // 0x254f80: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x254f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_254f84:
    // 0x254f84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x254f84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_254f88:
    // 0x254f88: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x254f88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_254f8c:
    // 0x254f8c: 0x320f809  jalr        $t9
label_254f90:
    if (ctx->pc == 0x254F90u) {
        ctx->pc = 0x254F94u;
        goto label_254f94;
    }
    ctx->pc = 0x254F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x254F94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254F8Cu, 0x254F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x254F94u;
label_254f94:
    // 0x254f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_254f98:
    // 0x254f98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x254f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_254f9c:
    // 0x254f9c: 0x3e00008  jr          $ra
label_254fa0:
    if (ctx->pc == 0x254FA0u) {
        ctx->pc = 0x254FA4u;
        goto label_254fa4;
    }
    ctx->pc = 0x254F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254FA4u;
label_254fa4:
    // 0x254fa4: 0x0  nop
    ctx->pc = 0x254fa4u;
    // NOP
label_254fa8:
    // 0x254fa8: 0x0  nop
    ctx->pc = 0x254fa8u;
    // NOP
label_254fac:
    // 0x254fac: 0x0  nop
    ctx->pc = 0x254facu;
    // NOP
label_254fb0:
    // 0x254fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_254fb4:
    // 0x254fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_254fb8:
    // 0x254fb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x254fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_254fbc:
    // 0x254fbc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x254fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_254fc0:
    // 0x254fc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_254fc4:
    // 0x254fc4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_254fc8:
    if (ctx->pc == 0x254FC8u) {
        ctx->pc = 0x254FCCu;
        goto label_254fcc;
    }
    ctx->pc = 0x254FC4u;
    {
        const bool branch_taken_0x254fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254fc4) {
            ctx->pc = 0x25500Cu;
            goto label_25500c;
        }
    }
    ctx->pc = 0x254FCCu;
label_254fcc:
    // 0x254fcc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x254fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_254fd0:
    // 0x254fd0: 0x246358b0  addiu       $v1, $v1, 0x58B0
    ctx->pc = 0x254fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22704));
label_254fd4:
    // 0x254fd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_254fd8:
    // 0x254fd8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x254fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_254fdc:
    // 0x254fdc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x254fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_254fe0:
    // 0x254fe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x254fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254fe4:
    // 0x254fe4: 0xc0887b4  jal         func_221ED0
label_254fe8:
    if (ctx->pc == 0x254FE8u) {
        ctx->pc = 0x254FECu;
        goto label_254fec;
    }
    ctx->pc = 0x254FE4u;
    SET_GPR_U32(ctx, 31, 0x254FECu);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x254FE4u, 0x254FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254FECu;
label_254fec:
    // 0x254fec: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x254fecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_254ff0:
    // 0x254ff0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x254ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_254ff4:
    // 0x254ff4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x254ff4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_254ff8:
    // 0x254ff8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_254ffc:
    if (ctx->pc == 0x254FFCu) {
        ctx->pc = 0x255000u;
        goto label_255000;
    }
    ctx->pc = 0x254FF8u;
    {
        const bool branch_taken_0x254ff8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x254ff8) {
            ctx->pc = 0x25500Cu;
            goto label_25500c;
        }
    }
    ctx->pc = 0x255000u;
label_255000:
    // 0x255000: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x255000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_255004:
    // 0x255004: 0xc0ba070  jal         func_2E81C0
label_255008:
    if (ctx->pc == 0x255008u) {
        ctx->pc = 0x25500Cu;
        goto label_25500c;
    }
    ctx->pc = 0x255004u;
    SET_GPR_U32(ctx, 31, 0x25500Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x255004u, 0x25500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25500Cu;
label_25500c:
    // 0x25500c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25500cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_255010:
    // 0x255010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x255010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_255014:
    // 0x255014: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x255014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_255018:
    // 0x255018: 0x3e00008  jr          $ra
label_25501c:
    if (ctx->pc == 0x25501Cu) {
        ctx->pc = 0x255020u;
        goto label_fallthrough_0x255018;
    }
    ctx->pc = 0x255018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x255018:
    ctx->pc = 0x255020u;
}
