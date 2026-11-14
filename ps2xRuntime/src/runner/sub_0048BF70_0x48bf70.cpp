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

// Function: sub_0048BF70
// Address: 0x48bf70 - 0x48c020
void sub_0048BF70_0x48bf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048BF70_0x48bf70");
#endif

    switch (ctx->pc) {
        case 0x48bf70u: goto label_48bf70;
        case 0x48bf74u: goto label_48bf74;
        case 0x48bf78u: goto label_48bf78;
        case 0x48bf7cu: goto label_48bf7c;
        case 0x48bf80u: goto label_48bf80;
        case 0x48bf84u: goto label_48bf84;
        case 0x48bf88u: goto label_48bf88;
        case 0x48bf8cu: goto label_48bf8c;
        case 0x48bf90u: goto label_48bf90;
        case 0x48bf94u: goto label_48bf94;
        case 0x48bf98u: goto label_48bf98;
        case 0x48bf9cu: goto label_48bf9c;
        case 0x48bfa0u: goto label_48bfa0;
        case 0x48bfa4u: goto label_48bfa4;
        case 0x48bfa8u: goto label_48bfa8;
        case 0x48bfacu: goto label_48bfac;
        case 0x48bfb0u: goto label_48bfb0;
        case 0x48bfb4u: goto label_48bfb4;
        case 0x48bfb8u: goto label_48bfb8;
        case 0x48bfbcu: goto label_48bfbc;
        case 0x48bfc0u: goto label_48bfc0;
        case 0x48bfc4u: goto label_48bfc4;
        case 0x48bfc8u: goto label_48bfc8;
        case 0x48bfccu: goto label_48bfcc;
        case 0x48bfd0u: goto label_48bfd0;
        case 0x48bfd4u: goto label_48bfd4;
        case 0x48bfd8u: goto label_48bfd8;
        case 0x48bfdcu: goto label_48bfdc;
        case 0x48bfe0u: goto label_48bfe0;
        case 0x48bfe4u: goto label_48bfe4;
        case 0x48bfe8u: goto label_48bfe8;
        case 0x48bfecu: goto label_48bfec;
        case 0x48bff0u: goto label_48bff0;
        case 0x48bff4u: goto label_48bff4;
        case 0x48bff8u: goto label_48bff8;
        case 0x48bffcu: goto label_48bffc;
        case 0x48c000u: goto label_48c000;
        case 0x48c004u: goto label_48c004;
        case 0x48c008u: goto label_48c008;
        case 0x48c00cu: goto label_48c00c;
        case 0x48c010u: goto label_48c010;
        case 0x48c014u: goto label_48c014;
        case 0x48c018u: goto label_48c018;
        case 0x48c01cu: goto label_48c01c;
        default: break;
    }

    ctx->pc = 0x48bf70u;

label_48bf70:
    // 0x48bf70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48bf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_48bf74:
    // 0x48bf74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48bf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48bf78:
    // 0x48bf78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48bf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_48bf7c:
    // 0x48bf7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48bf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_48bf80:
    // 0x48bf80: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48bf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48bf84:
    // 0x48bf84: 0x8c99000c  lw          $t9, 0xC($a0)
    ctx->pc = 0x48bf84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_48bf88:
    // 0x48bf88: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x48bf88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_48bf8c:
    // 0x48bf8c: 0x320f809  jalr        $t9
label_48bf90:
    if (ctx->pc == 0x48BF90u) {
        ctx->pc = 0x48BF94u;
        goto label_48bf94;
    }
    ctx->pc = 0x48BF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48BF94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48BF8Cu, 0x48BF94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48BF94u;
label_48bf94:
    // 0x48bf94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48bf94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48bf98:
    // 0x48bf98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x48bf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_48bf9c:
    // 0x48bf9c: 0x3e00008  jr          $ra
label_48bfa0:
    if (ctx->pc == 0x48BFA0u) {
        ctx->pc = 0x48BFA4u;
        goto label_48bfa4;
    }
    ctx->pc = 0x48BF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48BF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48BFA4u;
label_48bfa4:
    // 0x48bfa4: 0x0  nop
    ctx->pc = 0x48bfa4u;
    // NOP
label_48bfa8:
    // 0x48bfa8: 0x0  nop
    ctx->pc = 0x48bfa8u;
    // NOP
label_48bfac:
    // 0x48bfac: 0x0  nop
    ctx->pc = 0x48bfacu;
    // NOP
label_48bfb0:
    // 0x48bfb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48bfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_48bfb4:
    // 0x48bfb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48bfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48bfb8:
    // 0x48bfb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_48bfbc:
    // 0x48bfbc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x48bfbcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_48bfc0:
    // 0x48bfc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_48bfc4:
    // 0x48bfc4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_48bfc8:
    if (ctx->pc == 0x48BFC8u) {
        ctx->pc = 0x48BFCCu;
        goto label_48bfcc;
    }
    ctx->pc = 0x48BFC4u;
    {
        const bool branch_taken_0x48bfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48bfc4) {
            ctx->pc = 0x48C00Cu;
            goto label_48c00c;
        }
    }
    ctx->pc = 0x48BFCCu;
label_48bfcc:
    // 0x48bfcc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x48bfccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_48bfd0:
    // 0x48bfd0: 0x24636db8  addiu       $v1, $v1, 0x6DB8
    ctx->pc = 0x48bfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28088));
label_48bfd4:
    // 0x48bfd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_48bfd8:
    // 0x48bfd8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x48bfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_48bfdc:
    // 0x48bfdc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_48bfe0:
    // 0x48bfe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48bfe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48bfe4:
    // 0x48bfe4: 0xc122ee4  jal         func_48BB90
label_48bfe8:
    if (ctx->pc == 0x48BFE8u) {
        ctx->pc = 0x48BFECu;
        goto label_48bfec;
    }
    ctx->pc = 0x48BFE4u;
    SET_GPR_U32(ctx, 31, 0x48BFECu);
    ctx->pc = 0x48BB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BB90u, 0x48BFE4u, 0x48BFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BFECu;
label_48bfec:
    // 0x48bfec: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x48bfecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_48bff0:
    // 0x48bff0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x48bff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_48bff4:
    // 0x48bff4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x48bff4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_48bff8:
    // 0x48bff8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_48bffc:
    if (ctx->pc == 0x48BFFCu) {
        ctx->pc = 0x48C000u;
        goto label_48c000;
    }
    ctx->pc = 0x48BFF8u;
    {
        const bool branch_taken_0x48bff8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x48bff8) {
            ctx->pc = 0x48C00Cu;
            goto label_48c00c;
        }
    }
    ctx->pc = 0x48C000u;
label_48c000:
    // 0x48c000: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48c000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_48c004:
    // 0x48c004: 0xc0ba070  jal         func_2E81C0
label_48c008:
    if (ctx->pc == 0x48C008u) {
        ctx->pc = 0x48C00Cu;
        goto label_48c00c;
    }
    ctx->pc = 0x48C004u;
    SET_GPR_U32(ctx, 31, 0x48C00Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x48C004u, 0x48C00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C00Cu;
label_48c00c:
    // 0x48c00c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_48c010:
    // 0x48c010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48c010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48c014:
    // 0x48c014: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48c014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_48c018:
    // 0x48c018: 0x3e00008  jr          $ra
label_48c01c:
    if (ctx->pc == 0x48C01Cu) {
        ctx->pc = 0x48C020u;
        goto label_fallthrough_0x48c018;
    }
    ctx->pc = 0x48C018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x48c018:
    ctx->pc = 0x48C020u;
}
