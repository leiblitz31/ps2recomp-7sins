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

// Function: sub_002A02E0
// Address: 0x2a02e0 - 0x2a03e0
void sub_002A02E0_0x2a02e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A02E0_0x2a02e0");
#endif

    switch (ctx->pc) {
        case 0x2a0314u: goto label_2a0314;
        case 0x2a0330u: goto label_2a0330;
        case 0x2a0344u: goto label_2a0344;
        case 0x2a0354u: goto label_2a0354;
        case 0x2a0384u: goto label_2a0384;
        case 0x2a0394u: goto label_2a0394;
        default: break;
    }

    ctx->pc = 0x2a02e0u;

    // 0x2a02e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a02e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a02e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a02e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a02e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a02e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a02ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a02ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a02f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a02f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a02f4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2a02f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2a02f8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2a02f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2a02fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a02fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0300: 0x8c510018  lw          $s1, 0x18($v0)
    ctx->pc = 0x2a0300u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2a0304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a030c: 0xc0e0b8a  jal         func_382E28
    ctx->pc = 0x2A030Cu;
    SET_GPR_U32(ctx, 31, 0x2A0314u);
    ctx->pc = 0x382E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382E28u, 0x2A030Cu, 0x2A0314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0314u;
label_2a0314:
    // 0x2a0314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a0314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0318: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2A0318u;
    {
        const bool branch_taken_0x2a0318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0318) {
            ctx->pc = 0x2A03B4u;
            goto label_2a03b4;
        }
    }
    ctx->pc = 0x2A0320u;
    // 0x2a0320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0328: 0xc0e0dc6  jal         func_383718
    ctx->pc = 0x2A0328u;
    SET_GPR_U32(ctx, 31, 0x2A0330u);
    ctx->pc = 0x383718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383718u, 0x2A0328u, 0x2A0330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0330u;
label_2a0330:
    // 0x2a0330: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a0330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0338: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a033c: 0xc0e0dc6  jal         func_383718
    ctx->pc = 0x2A033Cu;
    SET_GPR_U32(ctx, 31, 0x2A0344u);
    ctx->pc = 0x383718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383718u, 0x2A033Cu, 0x2A0344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0344u;
label_2a0344:
    // 0x2a0344: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0348: 0x2785a3b0  addiu       $a1, $gp, -0x5C50
    ctx->pc = 0x2a0348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943664));
    // 0x2a034c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2A034Cu;
    SET_GPR_U32(ctx, 31, 0x2A0354u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2A034Cu, 0x2A0354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0354u;
label_2a0354:
    // 0x2a0354: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A0354u;
    {
        const bool branch_taken_0x2a0354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0354) {
            ctx->pc = 0x2A0374u;
            goto label_2a0374;
        }
    }
    ctx->pc = 0x2A035Cu;
    // 0x2a035c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2a035cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0360: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a0360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a0364: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a0364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a0368: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a0368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a036c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2A036Cu;
    {
        const bool branch_taken_0x2a036c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a036c) {
            ctx->pc = 0x2A03B8u;
            goto label_2a03b8;
        }
    }
    ctx->pc = 0x2A0374u;
label_2a0374:
    // 0x2a0374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a037c: 0xc0e0dc6  jal         func_383718
    ctx->pc = 0x2A037Cu;
    SET_GPR_U32(ctx, 31, 0x2A0384u);
    ctx->pc = 0x383718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383718u, 0x2A037Cu, 0x2A0384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0384u;
label_2a0384:
    // 0x2a0384: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0388: 0x2785a3b8  addiu       $a1, $gp, -0x5C48
    ctx->pc = 0x2a0388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943672));
    // 0x2a038c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2A038Cu;
    SET_GPR_U32(ctx, 31, 0x2A0394u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2A038Cu, 0x2A0394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0394u;
label_2a0394:
    // 0x2a0394: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A0394u;
    {
        const bool branch_taken_0x2a0394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0394) {
            ctx->pc = 0x2A03B4u;
            goto label_2a03b4;
        }
    }
    ctx->pc = 0x2A039Cu;
    // 0x2a039c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2a039cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a03a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a03a4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2a03a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2a03a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a03a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a03ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A03ACu;
    {
        const bool branch_taken_0x2a03ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a03ac) {
            ctx->pc = 0x2A03B8u;
            goto label_2a03b8;
        }
    }
    ctx->pc = 0x2A03B4u;
label_2a03b4:
    // 0x2a03b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a03b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a03b8:
    // 0x2a03b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a03b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a03bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a03bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a03c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a03c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a03c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a03c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a03c8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2a03c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a03cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A03CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A03CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A03D4u;
    // 0x2a03d4: 0x0  nop
    ctx->pc = 0x2a03d4u;
    // NOP
    // 0x2a03d8: 0x0  nop
    ctx->pc = 0x2a03d8u;
    // NOP
    // 0x2a03dc: 0x0  nop
    ctx->pc = 0x2a03dcu;
    // NOP
    ctx->pc = 0x2a03e0u;
}
