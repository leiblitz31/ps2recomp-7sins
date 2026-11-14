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

// Function: sub_00132320
// Address: 0x132320 - 0x132490
void sub_00132320_0x132320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132320_0x132320");
#endif

    switch (ctx->pc) {
        case 0x132338u: goto label_132338;
        case 0x1323bcu: goto label_1323bc;
        case 0x1323dcu: goto label_1323dc;
        case 0x13241cu: goto label_13241c;
        case 0x132430u: goto label_132430;
        case 0x132458u: goto label_132458;
        default: break;
    }

    ctx->pc = 0x132320u;

    // 0x132320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132328: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x132328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13232c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13232cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132330: 0xc0ad664  jal         func_2B5990
    ctx->pc = 0x132330u;
    SET_GPR_U32(ctx, 31, 0x132338u);
    ctx->pc = 0x2B5990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5990u, 0x132330u, 0x132338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132338u;
label_132338:
    // 0x132338: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x132338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x13233c: 0x24633700  addiu       $v1, $v1, 0x3700
    ctx->pc = 0x13233cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14080));
    // 0x132340: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x132340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132344: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x132344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x132348: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x132348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13234c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x13234cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x132350: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x132350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132354: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x132354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x132358: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x132358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13235c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x13235cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x132360: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x132360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132368: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x132368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13236c: 0x3e00008  jr          $ra
    ctx->pc = 0x13236Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13236Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132374u;
    // 0x132374: 0x0  nop
    ctx->pc = 0x132374u;
    // NOP
    // 0x132378: 0x0  nop
    ctx->pc = 0x132378u;
    // NOP
    // 0x13237c: 0x0  nop
    ctx->pc = 0x13237cu;
    // NOP
    // 0x132380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x132380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x132384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132388: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x132388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13238c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x13238cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x132390: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x132390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132394: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x132394u;
    {
        const bool branch_taken_0x132394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132394) {
            ctx->pc = 0x1323DCu;
            goto label_1323dc;
        }
    }
    ctx->pc = 0x13239Cu;
    // 0x13239c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x13239cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1323a0: 0x24633700  addiu       $v1, $v1, 0x3700
    ctx->pc = 0x1323a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14080));
    // 0x1323a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1323a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1323a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1323a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1323ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1323acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1323b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1323b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1323b4: 0xc0ad678  jal         func_2B59E0
    ctx->pc = 0x1323B4u;
    SET_GPR_U32(ctx, 31, 0x1323BCu);
    ctx->pc = 0x2B59E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B59E0u, 0x1323B4u, 0x1323BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1323BCu;
label_1323bc:
    // 0x1323bc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1323bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1323c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1323c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1323c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1323c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1323c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1323C8u;
    {
        const bool branch_taken_0x1323c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1323c8) {
            ctx->pc = 0x1323DCu;
            goto label_1323dc;
        }
    }
    ctx->pc = 0x1323D0u;
    // 0x1323d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1323d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1323d4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1323D4u;
    SET_GPR_U32(ctx, 31, 0x1323DCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1323D4u, 0x1323DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1323DCu;
label_1323dc:
    // 0x1323dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1323dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1323e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1323e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1323e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1323e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1323e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1323E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1323E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1323F0u;
    // 0x1323f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1323f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1323f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1323f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1323f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1323f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1323fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1323fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x132400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132404: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x132404u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x132408: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x132408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x13240c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13240cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132410: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x132410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x132414: 0xc04c924  jal         func_132490
    ctx->pc = 0x132414u;
    SET_GPR_U32(ctx, 31, 0x13241Cu);
    ctx->pc = 0x132490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132490u, 0x132414u, 0x13241Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13241Cu;
label_13241c:
    // 0x13241c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x13241cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132420: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x132420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x132424: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x132424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132428: 0xc04ca58  jal         func_132960
    ctx->pc = 0x132428u;
    SET_GPR_U32(ctx, 31, 0x132430u);
    ctx->pc = 0x132960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132960u, 0x132428u, 0x132430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132430u;
label_132430:
    // 0x132430: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x132430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x132434: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x132434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x132438: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x132438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13243c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13243cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x132440: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x132440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x132444: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x132444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x132448: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x132448u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13244c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13244cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132450: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x132450u;
    SET_GPR_U32(ctx, 31, 0x132458u);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x132450u, 0x132458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132458u;
label_132458:
    // 0x132458: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x132458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13245c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13245cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x132460: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x132460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x132464: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x132464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x132468: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x132468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x13246c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13246cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x132470: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x132470u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x132474: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x132474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x132478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13247c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13247cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132480: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x132480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x132484: 0x3e00008  jr          $ra
    ctx->pc = 0x132484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13248Cu;
    // 0x13248c: 0x0  nop
    ctx->pc = 0x13248cu;
    // NOP
    ctx->pc = 0x132490u;
}
