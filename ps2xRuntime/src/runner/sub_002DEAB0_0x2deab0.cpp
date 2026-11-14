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

// Function: sub_002DEAB0
// Address: 0x2deab0 - 0x2dec20
void sub_002DEAB0_0x2deab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEAB0_0x2deab0");
#endif

    switch (ctx->pc) {
        case 0x2deb74u: goto label_2deb74;
        default: break;
    }

    ctx->pc = 0x2deab0u;

    // 0x2deab0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2deab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2deab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2deab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2deab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2deab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2deabc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2deabcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2deac0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2deac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2deac4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2deac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2deac8: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x2deac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x2deacc: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x2deaccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
    // 0x2dead0: 0xafa90070  sw          $t1, 0x70($sp)
    ctx->pc = 0x2dead0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 9));
    // 0x2dead4: 0xafaa0080  sw          $t2, 0x80($sp)
    ctx->pc = 0x2dead4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 10));
    // 0x2dead8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2dead8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2deadc: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2deadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2deae0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2deae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2deae4: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2DEAE4u;
    {
        const bool branch_taken_0x2deae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2deae4) {
            ctx->pc = 0x2DEC00u;
            goto label_2dec00;
        }
    }
    ctx->pc = 0x2DEAECu;
    // 0x2deaec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2deaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2deaf0: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2DEAF0u;
    {
        const bool branch_taken_0x2deaf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2deaf0) {
            ctx->pc = 0x2DEBACu;
            goto label_2debac;
        }
    }
    ctx->pc = 0x2DEAF8u;
    // 0x2deaf8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DEAF8u;
    {
        const bool branch_taken_0x2deaf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deaf8) {
            ctx->pc = 0x2DEB08u;
            goto label_2deb08;
        }
    }
    ctx->pc = 0x2DEB00u;
    // 0x2deb00: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2DEB00u;
    {
        const bool branch_taken_0x2deb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deb00) {
            ctx->pc = 0x2DEC00u;
            goto label_2dec00;
        }
    }
    ctx->pc = 0x2DEB08u;
label_2deb08:
    // 0x2deb08: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2deb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2deb0c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2deb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2deb10: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2deb10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2deb14: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2deb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2deb18: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2deb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2deb1c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DEB1Cu;
    {
        const bool branch_taken_0x2deb1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2deb1c) {
            ctx->pc = 0x2DEB40u;
            goto label_2deb40;
        }
    }
    ctx->pc = 0x2DEB24u;
    // 0x2deb24: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2deb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2deb28: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2deb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2deb2c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DEB2Cu;
    {
        const bool branch_taken_0x2deb2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2deb2c) {
            ctx->pc = 0x2DEB40u;
            goto label_2deb40;
        }
    }
    ctx->pc = 0x2DEB34u;
    // 0x2deb34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2deb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2deb38: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2DEB38u;
    {
        const bool branch_taken_0x2deb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deb38) {
            ctx->pc = 0x2DEC04u;
            goto label_2dec04;
        }
    }
    ctx->pc = 0x2DEB40u;
label_2deb40:
    // 0x2deb40: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2deb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2deb44: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2deb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2deb48: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2deb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2deb4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2deb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2deb50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2deb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2deb54: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2deb54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2deb58: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2deb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2deb5c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2deb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2deb60: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2deb60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2deb64: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x2deb64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2deb68: 0x8fa80060  lw          $t0, 0x60($sp)
    ctx->pc = 0x2deb68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2deb6c: 0xc0b7b08  jal         func_2DEC20
    ctx->pc = 0x2DEB6Cu;
    SET_GPR_U32(ctx, 31, 0x2DEB74u);
    ctx->pc = 0x2DEC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEC20u, 0x2DEB6Cu, 0x2DEB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEB74u;
label_2deb74:
    // 0x2deb74: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2deb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2deb78: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2deb78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2deb7c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2deb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2deb80: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2deb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2deb84: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2deb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2deb88: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2deb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2deb8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2deb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2deb90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2deb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2deb94: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2deb94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2deb98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2deb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2deb9c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2deb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2deba0: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x2deba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x2deba4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2DEBA4u;
    {
        const bool branch_taken_0x2deba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deba4) {
            ctx->pc = 0x2DEC00u;
            goto label_2dec00;
        }
    }
    ctx->pc = 0x2DEBACu;
label_2debac:
    // 0x2debac: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2debacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2debb0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2debb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2debb4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2debb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2debb8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2debb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2debbc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2debbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2debc0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2debc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2debc4: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x2debc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2debc8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2DEBC8u;
    {
        const bool branch_taken_0x2debc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2debc8) {
            ctx->pc = 0x2DEC00u;
            goto label_2dec00;
        }
    }
    ctx->pc = 0x2DEBD0u;
    // 0x2debd0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2debd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2debd4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2debd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2debd8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2debd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2debdc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2debdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2debe0: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x2debe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x2debe4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2debe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2debe8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2debe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2debec: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2debecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2debf0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2debf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2debf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2debf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2debf8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2debf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2debfc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2debfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_2dec00:
    // 0x2dec00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dec00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dec04:
    // 0x2dec04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dec04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dec08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dec08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dec0c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2dec0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2dec10: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEC18u;
    // 0x2dec18: 0x0  nop
    ctx->pc = 0x2dec18u;
    // NOP
    // 0x2dec1c: 0x0  nop
    ctx->pc = 0x2dec1cu;
    // NOP
    ctx->pc = 0x2dec20u;
}
