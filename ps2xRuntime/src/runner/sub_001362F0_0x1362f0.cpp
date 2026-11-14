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

// Function: sub_001362F0
// Address: 0x1362f0 - 0x1365a0
void sub_001362F0_0x1362f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001362F0_0x1362f0");
#endif

    switch (ctx->pc) {
        case 0x136308u: goto label_136308;
        case 0x1363acu: goto label_1363ac;
        case 0x1363ccu: goto label_1363cc;
        case 0x1363fcu: goto label_1363fc;
        case 0x13643cu: goto label_13643c;
        case 0x13647cu: goto label_13647c;
        case 0x136494u: goto label_136494;
        case 0x136524u: goto label_136524;
        case 0x136540u: goto label_136540;
        case 0x136558u: goto label_136558;
        case 0x136570u: goto label_136570;
        default: break;
    }

    ctx->pc = 0x1362f0u;

    // 0x1362f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1362f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1362f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1362f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1362f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1362f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1362fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1362fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136300: 0xc08cb04  jal         func_232C10
    ctx->pc = 0x136300u;
    SET_GPR_U32(ctx, 31, 0x136308u);
    ctx->pc = 0x232C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232C10u, 0x136300u, 0x136308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136308u;
label_136308:
    // 0x136308: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x136308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x13630c: 0x24633730  addiu       $v1, $v1, 0x3730
    ctx->pc = 0x13630cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14128));
    // 0x136310: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x136310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136314: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x136314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x136318: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x136318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13631c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13631cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136320: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x136320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x136324: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x136324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x136328: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x136328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13632c: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x13632cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x136330: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x136330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136334: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x136334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x136338: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x136338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13633c: 0xa0400040  sb          $zero, 0x40($v0)
    ctx->pc = 0x13633cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x136340: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x136340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136344: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x136344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x136348: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x136348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13634c: 0xa0400048  sb          $zero, 0x48($v0)
    ctx->pc = 0x13634cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x136350: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x136350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136354: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x136354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x136358: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x136358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13635c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13635cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136360: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x136360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x136364: 0x3e00008  jr          $ra
    ctx->pc = 0x136364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13636Cu;
    // 0x13636c: 0x0  nop
    ctx->pc = 0x13636cu;
    // NOP
    // 0x136370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x136378: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x136378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13637c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x13637cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x136380: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x136380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136384: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x136384u;
    {
        const bool branch_taken_0x136384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136384) {
            ctx->pc = 0x1363CCu;
            goto label_1363cc;
        }
    }
    ctx->pc = 0x13638Cu;
    // 0x13638c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x13638cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x136390: 0x24633730  addiu       $v1, $v1, 0x3730
    ctx->pc = 0x136390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14128));
    // 0x136394: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x136394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136398: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x136398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13639c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13639cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1363a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1363a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1363a4: 0xc08cbd4  jal         func_232F50
    ctx->pc = 0x1363A4u;
    SET_GPR_U32(ctx, 31, 0x1363ACu);
    ctx->pc = 0x232F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232F50u, 0x1363A4u, 0x1363ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1363ACu;
label_1363ac:
    // 0x1363ac: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1363acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1363b0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1363b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1363b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1363b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1363b8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1363B8u;
    {
        const bool branch_taken_0x1363b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1363b8) {
            ctx->pc = 0x1363CCu;
            goto label_1363cc;
        }
    }
    ctx->pc = 0x1363C0u;
    // 0x1363c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1363c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1363c4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1363C4u;
    SET_GPR_U32(ctx, 31, 0x1363CCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1363C4u, 0x1363CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1363CCu;
label_1363cc:
    // 0x1363cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1363ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1363d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1363d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1363d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1363d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1363d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1363D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1363D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1363E0u;
    // 0x1363e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1363e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1363e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1363e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1363e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1363e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1363ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1363ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1363f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1363f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1363f4: 0xc08cbf8  jal         func_232FE0
    ctx->pc = 0x1363F4u;
    SET_GPR_U32(ctx, 31, 0x1363FCu);
    ctx->pc = 0x232FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232FE0u, 0x1363F4u, 0x1363FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1363FCu;
label_1363fc:
    // 0x1363fc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1363fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x136400: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x136400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136404: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x136404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13640c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13640cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x136410: 0x3e00008  jr          $ra
    ctx->pc = 0x136410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136418u;
    // 0x136418: 0x0  nop
    ctx->pc = 0x136418u;
    // NOP
    // 0x13641c: 0x0  nop
    ctx->pc = 0x13641cu;
    // NOP
    // 0x136420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x136424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x136428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13642c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13642cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x136430: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x136430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136434: 0xc08cc08  jal         func_233020
    ctx->pc = 0x136434u;
    SET_GPR_U32(ctx, 31, 0x13643Cu);
    ctx->pc = 0x233020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233020u, 0x136434u, 0x13643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13643Cu;
label_13643c:
    // 0x13643c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13643cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x136440: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x136440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136444: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x136444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13644c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13644cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x136450: 0x3e00008  jr          $ra
    ctx->pc = 0x136450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136458u;
    // 0x136458: 0x0  nop
    ctx->pc = 0x136458u;
    // NOP
    // 0x13645c: 0x0  nop
    ctx->pc = 0x13645cu;
    // NOP
    // 0x136460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136464: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x136464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x136468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13646c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13646cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x136470: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x136470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136474: 0xc08cc18  jal         func_233060
    ctx->pc = 0x136474u;
    SET_GPR_U32(ctx, 31, 0x13647Cu);
    ctx->pc = 0x233060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233060u, 0x136474u, 0x13647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13647Cu;
label_13647c:
    // 0x13647c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13647cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x136480: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x136480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136484: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x136484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x136488: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x136488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13648c: 0xc04de18  jal         func_137860
    ctx->pc = 0x13648Cu;
    SET_GPR_U32(ctx, 31, 0x136494u);
    ctx->pc = 0x137860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137860u, 0x13648Cu, 0x136494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136494u;
label_136494:
    // 0x136494: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x136494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136498: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x136498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13649c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13649cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1364a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1364a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1364a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1364A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1364A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1364ACu;
    // 0x1364ac: 0x0  nop
    ctx->pc = 0x1364acu;
    // NOP
    // 0x1364b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1364b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1364b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1364b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1364b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1364b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1364bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1364bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1364c0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1364c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1364c4: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x1364c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x1364c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1364c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1364cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1364ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1364d0: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1364D0u;
    {
        const bool branch_taken_0x1364d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1364d0) {
            ctx->pc = 0x136578u;
            goto label_136578;
        }
    }
    ctx->pc = 0x1364D8u;
    // 0x1364d8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1364d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1364dc: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1364DCu;
    {
        const bool branch_taken_0x1364dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1364dc) {
            ctx->pc = 0x136560u;
            goto label_136560;
        }
    }
    ctx->pc = 0x1364E4u;
    // 0x1364e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1364e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1364e8: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1364E8u;
    {
        const bool branch_taken_0x1364e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1364e8) {
            ctx->pc = 0x136548u;
            goto label_136548;
        }
    }
    ctx->pc = 0x1364F0u;
    // 0x1364f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1364f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1364f4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1364F4u;
    {
        const bool branch_taken_0x1364f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1364f4) {
            ctx->pc = 0x13652Cu;
            goto label_13652c;
        }
    }
    ctx->pc = 0x1364FCu;
    // 0x1364fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1364fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136500: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136500u;
    {
        const bool branch_taken_0x136500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x136500) {
            ctx->pc = 0x136510u;
            goto label_136510;
        }
    }
    ctx->pc = 0x136508u;
    // 0x136508: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x136508u;
    {
        const bool branch_taken_0x136508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136508) {
            ctx->pc = 0x136584u;
            goto label_136584;
        }
    }
    ctx->pc = 0x136510u;
label_136510:
    // 0x136510: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x136510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136514: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x136514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136518: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x136518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13651c: 0xc04da98  jal         func_136A60
    ctx->pc = 0x13651Cu;
    SET_GPR_U32(ctx, 31, 0x136524u);
    ctx->pc = 0x136A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A60u, 0x13651Cu, 0x136524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136524u;
label_136524:
    // 0x136524: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x136524u;
    {
        const bool branch_taken_0x136524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136524) {
            ctx->pc = 0x136584u;
            goto label_136584;
        }
    }
    ctx->pc = 0x13652Cu;
label_13652c:
    // 0x13652c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13652cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136530: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x136530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136534: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x136534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136538: 0xc04daac  jal         func_136AB0
    ctx->pc = 0x136538u;
    SET_GPR_U32(ctx, 31, 0x136540u);
    ctx->pc = 0x136AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136AB0u, 0x136538u, 0x136540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136540u;
label_136540:
    // 0x136540: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x136540u;
    {
        const bool branch_taken_0x136540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136540) {
            ctx->pc = 0x136584u;
            goto label_136584;
        }
    }
    ctx->pc = 0x136548u;
label_136548:
    // 0x136548: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x136548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13654c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13654cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136550: 0xc04dd10  jal         func_137440
    ctx->pc = 0x136550u;
    SET_GPR_U32(ctx, 31, 0x136558u);
    ctx->pc = 0x137440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137440u, 0x136550u, 0x136558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136558u;
label_136558:
    // 0x136558: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x136558u;
    {
        const bool branch_taken_0x136558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136558) {
            ctx->pc = 0x136584u;
            goto label_136584;
        }
    }
    ctx->pc = 0x136560u;
label_136560:
    // 0x136560: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x136560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136564: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x136564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136568: 0xc04de0c  jal         func_137830
    ctx->pc = 0x136568u;
    SET_GPR_U32(ctx, 31, 0x136570u);
    ctx->pc = 0x137830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137830u, 0x136568u, 0x136570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136570u;
label_136570:
    // 0x136570: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x136570u;
    {
        const bool branch_taken_0x136570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136570) {
            ctx->pc = 0x136584u;
            goto label_136584;
        }
    }
    ctx->pc = 0x136578u;
label_136578:
    // 0x136578: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13657c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13657cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136580: 0xa0430048  sb          $v1, 0x48($v0)
    ctx->pc = 0x136580u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 3));
label_136584:
    // 0x136584: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x136584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x136588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13658c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13658cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x136590: 0x3e00008  jr          $ra
    ctx->pc = 0x136590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136598u;
    // 0x136598: 0x0  nop
    ctx->pc = 0x136598u;
    // NOP
    // 0x13659c: 0x0  nop
    ctx->pc = 0x13659cu;
    // NOP
    ctx->pc = 0x1365a0u;
}
