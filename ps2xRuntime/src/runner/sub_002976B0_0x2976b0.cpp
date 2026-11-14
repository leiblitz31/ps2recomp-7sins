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

// Function: sub_002976B0
// Address: 0x2976b0 - 0x297820
void sub_002976B0_0x2976b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002976B0_0x2976b0");
#endif

    switch (ctx->pc) {
        case 0x2976e8u: goto label_2976e8;
        case 0x297704u: goto label_297704;
        case 0x297714u: goto label_297714;
        case 0x297768u: goto label_297768;
        case 0x297778u: goto label_297778;
        case 0x2977d0u: goto label_2977d0;
        case 0x2977e4u: goto label_2977e4;
        default: break;
    }

    ctx->pc = 0x2976b0u;

    // 0x2976b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2976b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2976b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2976b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2976b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2976b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2976bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2976bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2976c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2976c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2976c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2976c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2976c8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2976c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2976cc: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2976ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2976d0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2976d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2976d4: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x2976d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2976d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2976d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2976dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2976dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2976e0: 0xc0e0c2e  jal         func_3830B8
    ctx->pc = 0x2976E0u;
    SET_GPR_U32(ctx, 31, 0x2976E8u);
    ctx->pc = 0x3830B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3830B8u, 0x2976E0u, 0x2976E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2976E8u;
label_2976e8:
    // 0x2976e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2976e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2976ec: 0x10100042  beq         $zero, $s0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2976ECu;
    {
        const bool branch_taken_0x2976ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x2976ec) {
            ctx->pc = 0x2977F8u;
            goto label_2977f8;
        }
    }
    ctx->pc = 0x2976F4u;
    // 0x2976f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2976f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2976f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2976f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2976fc: 0xc0e0dc6  jal         func_383718
    ctx->pc = 0x2976FCu;
    SET_GPR_U32(ctx, 31, 0x297704u);
    ctx->pc = 0x383718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383718u, 0x2976FCu, 0x297704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297704u;
label_297704:
    // 0x297704: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297708: 0x2785a2e8  addiu       $a1, $gp, -0x5D18
    ctx->pc = 0x297708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943464));
    // 0x29770c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x29770Cu;
    SET_GPR_U32(ctx, 31, 0x297714u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x29770Cu, 0x297714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297714u;
label_297714:
    // 0x297714: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x297714u;
    {
        const bool branch_taken_0x297714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297714) {
            ctx->pc = 0x297758u;
            goto label_297758;
        }
    }
    ctx->pc = 0x29771Cu;
    // 0x29771c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x29771cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x297720: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x297720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x297724: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x297724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x297728: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x297728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29772c: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x29772cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x297730: 0x10020004  beq         $zero, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297730u;
    {
        const bool branch_taken_0x297730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x297730) {
            ctx->pc = 0x297744u;
            goto label_297744;
        }
    }
    ctx->pc = 0x297738u;
    // 0x297738: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x297738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29773c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29773cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x297740: 0xa0430040  sb          $v1, 0x40($v0)
    ctx->pc = 0x297740u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 3));
label_297744:
    // 0x297744: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x297744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x297748: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x297748u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29774c: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x29774cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x297750: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x297750u;
    {
        const bool branch_taken_0x297750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297750) {
            ctx->pc = 0x2977F8u;
            goto label_2977f8;
        }
    }
    ctx->pc = 0x297758u;
label_297758:
    // 0x297758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29775c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29775cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297760: 0xc0e0dc6  jal         func_383718
    ctx->pc = 0x297760u;
    SET_GPR_U32(ctx, 31, 0x297768u);
    ctx->pc = 0x383718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383718u, 0x297760u, 0x297768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297768u;
label_297768:
    // 0x297768: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29776c: 0x2785a2f0  addiu       $a1, $gp, -0x5D10
    ctx->pc = 0x29776cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943472));
    // 0x297770: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x297770u;
    SET_GPR_U32(ctx, 31, 0x297778u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x297770u, 0x297778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297778u;
label_297778:
    // 0x297778: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x297778u;
    {
        const bool branch_taken_0x297778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297778) {
            ctx->pc = 0x2977C0u;
            goto label_2977c0;
        }
    }
    ctx->pc = 0x297780u;
    // 0x297780: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x297780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x297784: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x297784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x297788: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x297788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x29778c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29778cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x297790: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x297790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x297794: 0x10020004  beq         $zero, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297794u;
    {
        const bool branch_taken_0x297794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x297794) {
            ctx->pc = 0x2977A8u;
            goto label_2977a8;
        }
    }
    ctx->pc = 0x29779Cu;
    // 0x29779c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29779cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2977a0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2977a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2977a4: 0xa0430040  sb          $v1, 0x40($v0)
    ctx->pc = 0x2977a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 3));
label_2977a8:
    // 0x2977a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2977a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2977ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2977acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2977b0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2977b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2977b4: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x2977b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2977b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2977B8u;
    {
        const bool branch_taken_0x2977b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2977b8) {
            ctx->pc = 0x2977F8u;
            goto label_2977f8;
        }
    }
    ctx->pc = 0x2977C0u;
label_2977c0:
    // 0x2977c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2977c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2977c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977c8: 0xc0e0dc6  jal         func_383718
    ctx->pc = 0x2977C8u;
    SET_GPR_U32(ctx, 31, 0x2977D0u);
    ctx->pc = 0x383718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383718u, 0x2977C8u, 0x2977D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2977D0u;
label_2977d0:
    // 0x2977d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2977d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977d4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2977d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2977d8: 0x24a5d5c8  addiu       $a1, $a1, -0x2A38
    ctx->pc = 0x2977d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956488));
    // 0x2977dc: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2977DCu;
    SET_GPR_U32(ctx, 31, 0x2977E4u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2977DCu, 0x2977E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2977E4u;
label_2977e4:
    // 0x2977e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2977E4u;
    {
        const bool branch_taken_0x2977e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2977e4) {
            ctx->pc = 0x2977F8u;
            goto label_2977f8;
        }
    }
    ctx->pc = 0x2977ECu;
    // 0x2977ec: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2977ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2977f0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2977f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2977f4: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x2977f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_2977f8:
    // 0x2977f8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2977f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2977fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2977fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297800: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x297800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297804: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x297804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x297808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29780c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29780cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297810: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x297810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x297814: 0x3e00008  jr          $ra
    ctx->pc = 0x297814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29781Cu;
    // 0x29781c: 0x0  nop
    ctx->pc = 0x29781cu;
    // NOP
    ctx->pc = 0x297820u;
}
