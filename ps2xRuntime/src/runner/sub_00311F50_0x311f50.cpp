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

// Function: sub_00311F50
// Address: 0x311f50 - 0x312030
void sub_00311F50_0x311f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311F50_0x311f50");
#endif

    switch (ctx->pc) {
        case 0x311f80u: goto label_311f80;
        case 0x311facu: goto label_311fac;
        case 0x311fe4u: goto label_311fe4;
        case 0x311ff4u: goto label_311ff4;
        case 0x31200cu: goto label_31200c;
        default: break;
    }

    ctx->pc = 0x311f50u;

    // 0x311f50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x311f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x311f54: 0x8f82a574  lw          $v0, -0x5A8C($gp)
    ctx->pc = 0x311f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944116)));
    // 0x311f58: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x311f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x311f5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x311f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311f60: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x311f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x311f64: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x311f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x311f68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x311f68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311f6c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x311f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311f70: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x311f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x311f74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x311f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x311f78: 0xc0e69e4  jal         func_39A790
    ctx->pc = 0x311F78u;
    SET_GPR_U32(ctx, 31, 0x311F80u);
    ctx->pc = 0x311F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311F78u;
    // 0x311f7c: 0xc29821  addu        $s3, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A790u, 0x311F78u, 0x311F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311F80u;
label_311f80:
    // 0x311f80: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x311f80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311f84: 0x8050000b  lb          $s0, 0xB($v0)
    ctx->pc = 0x311f84u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x311f88: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x311f88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x311f8c: 0x2626fff4  addiu       $a2, $s1, -0xC
    ctx->pc = 0x311f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
    // 0x311f90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x311f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311f94: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x311f94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x311f98: 0x24050134  addiu       $a1, $zero, 0x134
    ctx->pc = 0x311f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
    // 0x311f9c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x311f9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x311fa0: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x311fa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x311fa4: 0xc103404  jal         func_40D010
    ctx->pc = 0x311FA4u;
    SET_GPR_U32(ctx, 31, 0x311FACu);
    ctx->pc = 0x311FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311FA4u;
    // 0x311fa8: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x311FA4u, 0x311FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311FACu;
label_311fac:
    // 0x311fac: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x311FACu;
    {
        const bool branch_taken_0x311fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311FACu;
        // 0x311fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311fac) {
            ctx->pc = 0x312014u;
            goto label_312014;
        }
    }
    ctx->pc = 0x311FB4u;
    // 0x311fb4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x311FB4u;
    {
        const bool branch_taken_0x311fb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x311FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311FB4u;
        // 0x311fb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311fb4) {
            ctx->pc = 0x311FFCu;
            goto label_311ffc;
        }
    }
    ctx->pc = 0x311FBCu;
    // 0x311fbc: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x311fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x311fc0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x311fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x311fc4: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x311fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x311fc8: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x311fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x311fcc: 0x24700003  addiu       $s0, $v1, 0x3
    ctx->pc = 0x311fccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x311fd0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x311fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311fd4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x311fd4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x311fd8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x311fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x311fdc: 0xc103440  jal         func_40D100
    ctx->pc = 0x311FDCu;
    SET_GPR_U32(ctx, 31, 0x311FE4u);
    ctx->pc = 0x311FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311FDCu;
    // 0x311fe0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x311FDCu, 0x311FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311FE4u;
label_311fe4:
    // 0x311fe4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x311fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311fe8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x311fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311fec: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x311FECu;
    SET_GPR_U32(ctx, 31, 0x311FF4u);
    ctx->pc = 0x311FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311FECu;
    // 0x311ff0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x311FECu, 0x311FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311FF4u;
label_311ff4:
    // 0x311ff4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x311FF4u;
    {
        const bool branch_taken_0x311ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311FF4u;
        // 0x311ff8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ff4) {
            ctx->pc = 0x312010u;
            goto label_312010;
        }
    }
    ctx->pc = 0x311FFCu;
label_311ffc:
    // 0x311ffc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x311ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x312000: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x312000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x312004: 0xc103440  jal         func_40D100
    ctx->pc = 0x312004u;
    SET_GPR_U32(ctx, 31, 0x31200Cu);
    ctx->pc = 0x312008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312004u;
    // 0x312008: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x312004u, 0x31200Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31200Cu;
label_31200c:
    // 0x31200c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31200cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_312010:
    // 0x312010: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x312010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_312014:
    // 0x312014: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x312014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x312018: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x312018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31201c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31201cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x312020: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x312020u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x312024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x312024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312028: 0x3e00008  jr          $ra
    ctx->pc = 0x312028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312028u;
        // 0x31202c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312030u;
}
