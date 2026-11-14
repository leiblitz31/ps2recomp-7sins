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

// Function: sub_0046BDA0
// Address: 0x46bda0 - 0x46be50
void sub_0046BDA0_0x46bda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046BDA0_0x46bda0");
#endif

    switch (ctx->pc) {
        case 0x46be10u: goto label_46be10;
        case 0x46be30u: goto label_46be30;
        default: break;
    }

    ctx->pc = 0x46bda0u;

    // 0x46bda0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46bda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46bda4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46bda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46bda8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46bdac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x46bdacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x46bdb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bdb4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x46BDB4u;
    {
        const bool branch_taken_0x46bdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46bdb4) {
            ctx->pc = 0x46BE30u;
            goto label_46be30;
        }
    }
    ctx->pc = 0x46BDBCu;
    // 0x46bdbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bdc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46bdc4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x46BDC4u;
    {
        const bool branch_taken_0x46bdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46bdc4) {
            ctx->pc = 0x46BE10u;
            goto label_46be10;
        }
    }
    ctx->pc = 0x46BDCCu;
    // 0x46bdcc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46bdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bdd0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x46bdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bdd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bdd8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x46bdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x46bddc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bde0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46bde4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x46bde4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x46bde8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x46bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x46bdec: 0x33183  sra         $a2, $v1, 6
    ctx->pc = 0x46bdecu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 6));
    // 0x46bdf0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x46BDF0u;
    {
        const bool branch_taken_0x46bdf0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x46bdf0) {
            ctx->pc = 0x46BE00u;
            goto label_46be00;
        }
    }
    ctx->pc = 0x46BDF8u;
    // 0x46bdf8: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x46bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x46bdfc: 0x23183  sra         $a2, $v0, 6
    ctx->pc = 0x46bdfcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
label_46be00:
    // 0x46be00: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x46be00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x46be04: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x46be04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x46be08: 0xc11b4bc  jal         func_46D2F0
    ctx->pc = 0x46BE08u;
    SET_GPR_U32(ctx, 31, 0x46BE10u);
    ctx->pc = 0x46D2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D2F0u, 0x46BE08u, 0x46BE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BE10u;
label_46be10:
    // 0x46be10: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x46be10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46be14: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x46be14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x46be18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x46be18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x46be1c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46BE1Cu;
    {
        const bool branch_taken_0x46be1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x46be1c) {
            ctx->pc = 0x46BE30u;
            goto label_46be30;
        }
    }
    ctx->pc = 0x46BE24u;
    // 0x46be24: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46be24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46be28: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x46BE28u;
    SET_GPR_U32(ctx, 31, 0x46BE30u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x46BE28u, 0x46BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BE30u;
label_46be30:
    // 0x46be30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46be30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46be34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46be34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46be38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46be38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46be3c: 0x3e00008  jr          $ra
    ctx->pc = 0x46BE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46BE44u;
    // 0x46be44: 0x0  nop
    ctx->pc = 0x46be44u;
    // NOP
    // 0x46be48: 0x0  nop
    ctx->pc = 0x46be48u;
    // NOP
    // 0x46be4c: 0x0  nop
    ctx->pc = 0x46be4cu;
    // NOP
    ctx->pc = 0x46be50u;
}
