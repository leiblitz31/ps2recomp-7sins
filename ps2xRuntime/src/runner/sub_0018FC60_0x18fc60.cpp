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

// Function: sub_0018FC60
// Address: 0x18fc60 - 0x18fe50
void sub_0018FC60_0x18fc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FC60_0x18fc60");
#endif

    switch (ctx->pc) {
        case 0x18fc60u: goto label_18fc60;
        case 0x18fc64u: goto label_18fc64;
        case 0x18fc68u: goto label_18fc68;
        case 0x18fc6cu: goto label_18fc6c;
        case 0x18fc70u: goto label_18fc70;
        case 0x18fc74u: goto label_18fc74;
        case 0x18fc78u: goto label_18fc78;
        case 0x18fc7cu: goto label_18fc7c;
        case 0x18fc80u: goto label_18fc80;
        case 0x18fc84u: goto label_18fc84;
        case 0x18fc88u: goto label_18fc88;
        case 0x18fc8cu: goto label_18fc8c;
        case 0x18fc90u: goto label_18fc90;
        case 0x18fc94u: goto label_18fc94;
        case 0x18fc98u: goto label_18fc98;
        case 0x18fc9cu: goto label_18fc9c;
        case 0x18fca0u: goto label_18fca0;
        case 0x18fca4u: goto label_18fca4;
        case 0x18fca8u: goto label_18fca8;
        case 0x18fcacu: goto label_18fcac;
        case 0x18fcb0u: goto label_18fcb0;
        case 0x18fcb4u: goto label_18fcb4;
        case 0x18fcb8u: goto label_18fcb8;
        case 0x18fcbcu: goto label_18fcbc;
        case 0x18fcc0u: goto label_18fcc0;
        case 0x18fcc4u: goto label_18fcc4;
        case 0x18fcc8u: goto label_18fcc8;
        case 0x18fcccu: goto label_18fccc;
        case 0x18fcd0u: goto label_18fcd0;
        case 0x18fcd4u: goto label_18fcd4;
        case 0x18fcd8u: goto label_18fcd8;
        case 0x18fcdcu: goto label_18fcdc;
        case 0x18fce0u: goto label_18fce0;
        case 0x18fce4u: goto label_18fce4;
        case 0x18fce8u: goto label_18fce8;
        case 0x18fcecu: goto label_18fcec;
        case 0x18fcf0u: goto label_18fcf0;
        case 0x18fcf4u: goto label_18fcf4;
        case 0x18fcf8u: goto label_18fcf8;
        case 0x18fcfcu: goto label_18fcfc;
        case 0x18fd00u: goto label_18fd00;
        case 0x18fd04u: goto label_18fd04;
        case 0x18fd08u: goto label_18fd08;
        case 0x18fd0cu: goto label_18fd0c;
        case 0x18fd10u: goto label_18fd10;
        case 0x18fd14u: goto label_18fd14;
        case 0x18fd18u: goto label_18fd18;
        case 0x18fd1cu: goto label_18fd1c;
        case 0x18fd20u: goto label_18fd20;
        case 0x18fd24u: goto label_18fd24;
        case 0x18fd28u: goto label_18fd28;
        case 0x18fd2cu: goto label_18fd2c;
        case 0x18fd30u: goto label_18fd30;
        case 0x18fd34u: goto label_18fd34;
        case 0x18fd38u: goto label_18fd38;
        case 0x18fd3cu: goto label_18fd3c;
        case 0x18fd40u: goto label_18fd40;
        case 0x18fd44u: goto label_18fd44;
        case 0x18fd48u: goto label_18fd48;
        case 0x18fd4cu: goto label_18fd4c;
        case 0x18fd50u: goto label_18fd50;
        case 0x18fd54u: goto label_18fd54;
        case 0x18fd58u: goto label_18fd58;
        case 0x18fd5cu: goto label_18fd5c;
        case 0x18fd60u: goto label_18fd60;
        case 0x18fd64u: goto label_18fd64;
        case 0x18fd68u: goto label_18fd68;
        case 0x18fd6cu: goto label_18fd6c;
        case 0x18fd70u: goto label_18fd70;
        case 0x18fd74u: goto label_18fd74;
        case 0x18fd78u: goto label_18fd78;
        case 0x18fd7cu: goto label_18fd7c;
        case 0x18fd80u: goto label_18fd80;
        case 0x18fd84u: goto label_18fd84;
        case 0x18fd88u: goto label_18fd88;
        case 0x18fd8cu: goto label_18fd8c;
        case 0x18fd90u: goto label_18fd90;
        case 0x18fd94u: goto label_18fd94;
        case 0x18fd98u: goto label_18fd98;
        case 0x18fd9cu: goto label_18fd9c;
        case 0x18fda0u: goto label_18fda0;
        case 0x18fda4u: goto label_18fda4;
        case 0x18fda8u: goto label_18fda8;
        case 0x18fdacu: goto label_18fdac;
        case 0x18fdb0u: goto label_18fdb0;
        case 0x18fdb4u: goto label_18fdb4;
        case 0x18fdb8u: goto label_18fdb8;
        case 0x18fdbcu: goto label_18fdbc;
        case 0x18fdc0u: goto label_18fdc0;
        case 0x18fdc4u: goto label_18fdc4;
        case 0x18fdc8u: goto label_18fdc8;
        case 0x18fdccu: goto label_18fdcc;
        case 0x18fdd0u: goto label_18fdd0;
        case 0x18fdd4u: goto label_18fdd4;
        case 0x18fdd8u: goto label_18fdd8;
        case 0x18fddcu: goto label_18fddc;
        case 0x18fde0u: goto label_18fde0;
        case 0x18fde4u: goto label_18fde4;
        case 0x18fde8u: goto label_18fde8;
        case 0x18fdecu: goto label_18fdec;
        case 0x18fdf0u: goto label_18fdf0;
        case 0x18fdf4u: goto label_18fdf4;
        case 0x18fdf8u: goto label_18fdf8;
        case 0x18fdfcu: goto label_18fdfc;
        case 0x18fe00u: goto label_18fe00;
        case 0x18fe04u: goto label_18fe04;
        case 0x18fe08u: goto label_18fe08;
        case 0x18fe0cu: goto label_18fe0c;
        case 0x18fe10u: goto label_18fe10;
        case 0x18fe14u: goto label_18fe14;
        case 0x18fe18u: goto label_18fe18;
        case 0x18fe1cu: goto label_18fe1c;
        case 0x18fe20u: goto label_18fe20;
        case 0x18fe24u: goto label_18fe24;
        case 0x18fe28u: goto label_18fe28;
        case 0x18fe2cu: goto label_18fe2c;
        case 0x18fe30u: goto label_18fe30;
        case 0x18fe34u: goto label_18fe34;
        case 0x18fe38u: goto label_18fe38;
        case 0x18fe3cu: goto label_18fe3c;
        case 0x18fe40u: goto label_18fe40;
        case 0x18fe44u: goto label_18fe44;
        case 0x18fe48u: goto label_18fe48;
        case 0x18fe4cu: goto label_18fe4c;
        default: break;
    }

    ctx->pc = 0x18fc60u;

label_18fc60:
    // 0x18fc60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18fc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18fc64:
    // 0x18fc64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18fc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18fc68:
    // 0x18fc68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18fc68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_18fc6c:
    // 0x18fc6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18fc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18fc70:
    // 0x18fc70: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x18fc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_18fc74:
    // 0x18fc74: 0xc0ad6a8  jal         func_2B5AA0
label_18fc78:
    if (ctx->pc == 0x18FC78u) {
        ctx->pc = 0x18FC7Cu;
        goto label_18fc7c;
    }
    ctx->pc = 0x18FC74u;
    SET_GPR_U32(ctx, 31, 0x18FC7Cu);
    ctx->pc = 0x2B5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AA0u, 0x18FC74u, 0x18FC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FC7Cu;
label_18fc7c:
    // 0x18fc7c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x18fc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_18fc80:
    // 0x18fc80: 0x24634180  addiu       $v1, $v1, 0x4180
    ctx->pc = 0x18fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16768));
label_18fc84:
    // 0x18fc84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18fc88:
    // 0x18fc88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_18fc8c:
    // 0x18fc8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18fc90:
    // 0x18fc90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18fc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18fc94:
    // 0x18fc94: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18fc94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_18fc98:
    // 0x18fc98: 0x3e00008  jr          $ra
label_18fc9c:
    if (ctx->pc == 0x18FC9Cu) {
        ctx->pc = 0x18FCA0u;
        goto label_18fca0;
    }
    ctx->pc = 0x18FC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FCA0u;
label_18fca0:
    // 0x18fca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18fca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18fca4:
    // 0x18fca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18fca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18fca8:
    // 0x18fca8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18fca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_18fcac:
    // 0x18fcac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x18fcacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_18fcb0:
    // 0x18fcb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18fcb4:
    // 0x18fcb4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_18fcb8:
    if (ctx->pc == 0x18FCB8u) {
        ctx->pc = 0x18FCBCu;
        goto label_18fcbc;
    }
    ctx->pc = 0x18FCB4u;
    {
        const bool branch_taken_0x18fcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fcb4) {
            ctx->pc = 0x18FCFCu;
            goto label_18fcfc;
        }
    }
    ctx->pc = 0x18FCBCu;
label_18fcbc:
    // 0x18fcbc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x18fcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_18fcc0:
    // 0x18fcc0: 0x24634180  addiu       $v1, $v1, 0x4180
    ctx->pc = 0x18fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16768));
label_18fcc4:
    // 0x18fcc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18fcc8:
    // 0x18fcc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18fcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_18fccc:
    // 0x18fccc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18fcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18fcd0:
    // 0x18fcd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18fcd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fcd4:
    // 0x18fcd4: 0xc0ad6d4  jal         func_2B5B50
label_18fcd8:
    if (ctx->pc == 0x18FCD8u) {
        ctx->pc = 0x18FCDCu;
        goto label_18fcdc;
    }
    ctx->pc = 0x18FCD4u;
    SET_GPR_U32(ctx, 31, 0x18FCDCu);
    ctx->pc = 0x2B5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B50u, 0x18FCD4u, 0x18FCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FCDCu;
label_18fcdc:
    // 0x18fcdc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x18fcdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_18fce0:
    // 0x18fce0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18fce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_18fce4:
    // 0x18fce4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18fce4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_18fce8:
    // 0x18fce8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_18fcec:
    if (ctx->pc == 0x18FCECu) {
        ctx->pc = 0x18FCF0u;
        goto label_18fcf0;
    }
    ctx->pc = 0x18FCE8u;
    {
        const bool branch_taken_0x18fce8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18fce8) {
            ctx->pc = 0x18FCFCu;
            goto label_18fcfc;
        }
    }
    ctx->pc = 0x18FCF0u;
label_18fcf0:
    // 0x18fcf0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18fcf4:
    // 0x18fcf4: 0xc0ba070  jal         func_2E81C0
label_18fcf8:
    if (ctx->pc == 0x18FCF8u) {
        ctx->pc = 0x18FCFCu;
        goto label_18fcfc;
    }
    ctx->pc = 0x18FCF4u;
    SET_GPR_U32(ctx, 31, 0x18FCFCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x18FCF4u, 0x18FCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FCFCu;
label_18fcfc:
    // 0x18fcfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18fd00:
    // 0x18fd00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18fd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18fd04:
    // 0x18fd04: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18fd04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18fd08:
    // 0x18fd08: 0x3e00008  jr          $ra
label_18fd0c:
    if (ctx->pc == 0x18FD0Cu) {
        ctx->pc = 0x18FD10u;
        goto label_18fd10;
    }
    ctx->pc = 0x18FD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FD10u;
label_18fd10:
    // 0x18fd10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18fd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_18fd14:
    // 0x18fd14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18fd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18fd18:
    // 0x18fd18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18fd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18fd1c:
    // 0x18fd1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18fd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18fd20:
    // 0x18fd20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18fd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18fd24:
    // 0x18fd24: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x18fd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_18fd28:
    // 0x18fd28: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x18fd28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
label_18fd2c:
    // 0x18fd2c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x18fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18fd30:
    // 0x18fd30: 0x93a50050  lbu         $a1, 0x50($sp)
    ctx->pc = 0x18fd30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_18fd34:
    // 0x18fd34: 0xc0ad96c  jal         func_2B65B0
label_18fd38:
    if (ctx->pc == 0x18FD38u) {
        ctx->pc = 0x18FD3Cu;
        goto label_18fd3c;
    }
    ctx->pc = 0x18FD34u;
    SET_GPR_U32(ctx, 31, 0x18FD3Cu);
    ctx->pc = 0x2B65B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B65B0u, 0x18FD34u, 0x18FD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FD3Cu;
label_18fd3c:
    // 0x18fd3c: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x18fd3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_18fd40:
    // 0x18fd40: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_18fd44:
    if (ctx->pc == 0x18FD44u) {
        ctx->pc = 0x18FD48u;
        goto label_18fd48;
    }
    ctx->pc = 0x18FD40u;
    {
        const bool branch_taken_0x18fd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fd40) {
            ctx->pc = 0x18FDFCu;
            goto label_18fdfc;
        }
    }
    ctx->pc = 0x18FD48u;
label_18fd48:
    // 0x18fd48: 0x8f82bc4c  lw          $v0, -0x43B4($gp)
    ctx->pc = 0x18fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949964)));
label_18fd4c:
    // 0x18fd4c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_18fd50:
    if (ctx->pc == 0x18FD50u) {
        ctx->pc = 0x18FD54u;
        goto label_18fd54;
    }
    ctx->pc = 0x18FD4Cu;
    {
        const bool branch_taken_0x18fd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fd4c) {
            ctx->pc = 0x18FD88u;
            goto label_18fd88;
        }
    }
    ctx->pc = 0x18FD54u;
label_18fd54:
    // 0x18fd54: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x18fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_18fd58:
    // 0x18fd58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18fd58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18fd5c:
    // 0x18fd5c: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x18fd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_18fd60:
    // 0x18fd60: 0xc0529b8  jal         func_14A6E0
label_18fd64:
    if (ctx->pc == 0x18FD64u) {
        ctx->pc = 0x18FD68u;
        goto label_18fd68;
    }
    ctx->pc = 0x18FD60u;
    SET_GPR_U32(ctx, 31, 0x18FD68u);
    ctx->pc = 0x14A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A6E0u, 0x18FD60u, 0x18FD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FD68u;
label_18fd68:
    // 0x18fd68: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x18fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_18fd6c:
    // 0x18fd6c: 0x8f85bc4c  lw          $a1, -0x43B4($gp)
    ctx->pc = 0x18fd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949964)));
label_18fd70:
    // 0x18fd70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18fd70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fd74:
    // 0x18fd74: 0xc052be8  jal         func_14AFA0
label_18fd78:
    if (ctx->pc == 0x18FD78u) {
        ctx->pc = 0x18FD7Cu;
        goto label_18fd7c;
    }
    ctx->pc = 0x18FD74u;
    SET_GPR_U32(ctx, 31, 0x18FD7Cu);
    ctx->pc = 0x14AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFA0u, 0x18FD74u, 0x18FD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FD7Cu;
label_18fd7c:
    // 0x18fd7c: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x18fd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_18fd80:
    // 0x18fd80: 0xc052c38  jal         func_14B0E0
label_18fd84:
    if (ctx->pc == 0x18FD84u) {
        ctx->pc = 0x18FD88u;
        goto label_18fd88;
    }
    ctx->pc = 0x18FD80u;
    SET_GPR_U32(ctx, 31, 0x18FD88u);
    ctx->pc = 0x14B0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B0E0u, 0x18FD80u, 0x18FD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FD88u;
label_18fd88:
    // 0x18fd88: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x18fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_18fd8c:
    // 0x18fd8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18fd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fd90:
    // 0x18fd90: 0xc04fbc4  jal         func_13EF10
label_18fd94:
    if (ctx->pc == 0x18FD94u) {
        ctx->pc = 0x18FD98u;
        goto label_18fd98;
    }
    ctx->pc = 0x18FD90u;
    SET_GPR_U32(ctx, 31, 0x18FD98u);
    ctx->pc = 0x13EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF10u, 0x18FD90u, 0x18FD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FD98u;
label_18fd98:
    // 0x18fd98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18fd98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18fd9c:
    // 0x18fd9c: 0x10120022  beq         $zero, $s2, . + 4 + (0x22 << 2)
label_18fda0:
    if (ctx->pc == 0x18FDA0u) {
        ctx->pc = 0x18FDA4u;
        goto label_18fda4;
    }
    ctx->pc = 0x18FD9Cu;
    {
        const bool branch_taken_0x18fd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x18fd9c) {
            ctx->pc = 0x18FE28u;
            goto label_18fe28;
        }
    }
    ctx->pc = 0x18FDA4u;
label_18fda4:
    // 0x18fda4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18fda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18fda8:
    // 0x18fda8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18fda8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18fdac:
    // 0x18fdac: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18fdacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18fdb0:
    // 0x18fdb0: 0x320f809  jalr        $t9
label_18fdb4:
    if (ctx->pc == 0x18FDB4u) {
        ctx->pc = 0x18FDB8u;
        goto label_18fdb8;
    }
    ctx->pc = 0x18FDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18FDB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FDB0u, 0x18FDB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FDB8u;
label_18fdb8:
    // 0x18fdb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18fdb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18fdbc:
    // 0x18fdbc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x18fdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18fdc0:
    // 0x18fdc0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18fdc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18fdc4:
    // 0x18fdc4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18fdc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18fdc8:
    // 0x18fdc8: 0x320f809  jalr        $t9
label_18fdcc:
    if (ctx->pc == 0x18FDCCu) {
        ctx->pc = 0x18FDD0u;
        goto label_18fdd0;
    }
    ctx->pc = 0x18FDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18FDD0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FDC8u, 0x18FDD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FDD0u;
label_18fdd0:
    // 0x18fdd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18fdd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18fdd4:
    // 0x18fdd4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x18fdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_18fdd8:
    // 0x18fdd8: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x18fdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_18fddc:
    // 0x18fddc: 0xc063f94  jal         func_18FE50
label_18fde0:
    if (ctx->pc == 0x18FDE0u) {
        ctx->pc = 0x18FDE4u;
        goto label_18fde4;
    }
    ctx->pc = 0x18FDDCu;
    SET_GPR_U32(ctx, 31, 0x18FDE4u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x18FDDCu, 0x18FDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FDE4u;
label_18fde4:
    // 0x18fde4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x18fde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_18fde8:
    // 0x18fde8: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x18fde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_18fdec:
    // 0x18fdec: 0xc063f94  jal         func_18FE50
label_18fdf0:
    if (ctx->pc == 0x18FDF0u) {
        ctx->pc = 0x18FDF4u;
        goto label_18fdf4;
    }
    ctx->pc = 0x18FDECu;
    SET_GPR_U32(ctx, 31, 0x18FDF4u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x18FDECu, 0x18FDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FDF4u;
label_18fdf4:
    // 0x18fdf4: 0x1000000c  b           . + 4 + (0xC << 2)
label_18fdf8:
    if (ctx->pc == 0x18FDF8u) {
        ctx->pc = 0x18FDFCu;
        goto label_18fdfc;
    }
    ctx->pc = 0x18FDF4u;
    {
        const bool branch_taken_0x18fdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fdf4) {
            ctx->pc = 0x18FE28u;
            goto label_18fe28;
        }
    }
    ctx->pc = 0x18FDFCu;
label_18fdfc:
    // 0x18fdfc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x18fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_18fe00:
    // 0x18fe00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18fe00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18fe04:
    // 0x18fe04: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x18fe04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_18fe08:
    // 0x18fe08: 0xc0529b8  jal         func_14A6E0
label_18fe0c:
    if (ctx->pc == 0x18FE0Cu) {
        ctx->pc = 0x18FE10u;
        goto label_18fe10;
    }
    ctx->pc = 0x18FE08u;
    SET_GPR_U32(ctx, 31, 0x18FE10u);
    ctx->pc = 0x14A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A6E0u, 0x18FE08u, 0x18FE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FE10u;
label_18fe10:
    // 0x18fe10: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x18fe10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_18fe14:
    // 0x18fe14: 0xc052c00  jal         func_14B000
label_18fe18:
    if (ctx->pc == 0x18FE18u) {
        ctx->pc = 0x18FE1Cu;
        goto label_18fe1c;
    }
    ctx->pc = 0x18FE14u;
    SET_GPR_U32(ctx, 31, 0x18FE1Cu);
    ctx->pc = 0x14B000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B000u, 0x18FE14u, 0x18FE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FE1Cu;
label_18fe1c:
    // 0x18fe1c: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x18fe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_18fe20:
    // 0x18fe20: 0xc052c38  jal         func_14B0E0
label_18fe24:
    if (ctx->pc == 0x18FE24u) {
        ctx->pc = 0x18FE28u;
        goto label_18fe28;
    }
    ctx->pc = 0x18FE20u;
    SET_GPR_U32(ctx, 31, 0x18FE28u);
    ctx->pc = 0x14B0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B0E0u, 0x18FE20u, 0x18FE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FE28u;
label_18fe28:
    // 0x18fe28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18fe28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18fe2c:
    // 0x18fe2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18fe2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18fe30:
    // 0x18fe30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18fe30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18fe34:
    // 0x18fe34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18fe34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18fe38:
    // 0x18fe38: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x18fe38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_18fe3c:
    // 0x18fe3c: 0x3e00008  jr          $ra
label_18fe40:
    if (ctx->pc == 0x18FE40u) {
        ctx->pc = 0x18FE44u;
        goto label_18fe44;
    }
    ctx->pc = 0x18FE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FE44u;
label_18fe44:
    // 0x18fe44: 0x0  nop
    ctx->pc = 0x18fe44u;
    // NOP
label_18fe48:
    // 0x18fe48: 0x0  nop
    ctx->pc = 0x18fe48u;
    // NOP
label_18fe4c:
    // 0x18fe4c: 0x0  nop
    ctx->pc = 0x18fe4cu;
    // NOP
    ctx->pc = 0x18fe50u;
}
