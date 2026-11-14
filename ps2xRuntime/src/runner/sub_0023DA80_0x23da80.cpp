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

// Function: sub_0023DA80
// Address: 0x23da80 - 0x23db90
void sub_0023DA80_0x23da80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DA80_0x23da80");
#endif

    switch (ctx->pc) {
        case 0x23daa8u: goto label_23daa8;
        case 0x23db14u: goto label_23db14;
        case 0x23db7cu: goto label_23db7c;
        default: break;
    }

    ctx->pc = 0x23da80u;

    // 0x23da80: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x23da80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x23da84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23da84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23da88: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x23da88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x23da8c: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x23da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x23da90: 0xa3a600b0  sb          $a2, 0xB0($sp)
    ctx->pc = 0x23da90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 6));
    // 0x23da94: 0xafa700c0  sw          $a3, 0xC0($sp)
    ctx->pc = 0x23da94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 7));
    // 0x23da98: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23da98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23da9c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x23da9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23daa0: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x23DAA0u;
    SET_GPR_U32(ctx, 31, 0x23DAA8u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x23DAA0u, 0x23DAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DAA8u;
label_23daa8:
    // 0x23daa8: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x23daa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x23daac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x23daacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23dab0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x23dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23dab4: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x23dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x23dab8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23dabc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x23dabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dac0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x23dac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x23dac4: 0x93a200b0  lbu         $v0, 0xB0($sp)
    ctx->pc = 0x23dac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23dac8: 0xa3a20050  sb          $v0, 0x50($sp)
    ctx->pc = 0x23dac8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x23dacc: 0xa3a00058  sb          $zero, 0x58($sp)
    ctx->pc = 0x23daccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x23dad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23dad4: 0xa3a20074  sb          $v0, 0x74($sp)
    ctx->pc = 0x23dad4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 2));
    // 0x23dad8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x23dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23dadc: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x23dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x23dae0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x23dae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23dae4: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x23dae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x23dae8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x23dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23daec: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x23daecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x23daf0: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x23daf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x23daf4: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x23daf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x23daf8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x23daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23dafc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23DAFCu;
    {
        const bool branch_taken_0x23dafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dafc) {
            ctx->pc = 0x23DB18u;
            goto label_23db18;
        }
    }
    ctx->pc = 0x23DB04u;
    // 0x23db04: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x23db04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23db08: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x23db08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23db0c: 0xc08f790  jal         func_23DE40
    ctx->pc = 0x23DB0Cu;
    SET_GPR_U32(ctx, 31, 0x23DB14u);
    ctx->pc = 0x23DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DE40u, 0x23DB0Cu, 0x23DB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB14u;
label_23db14:
    // 0x23db14: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x23db14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_23db18:
    // 0x23db18: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x23db18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23db1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23db20: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23DB20u;
    {
        const bool branch_taken_0x23db20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23db20) {
            ctx->pc = 0x23DB68u;
            goto label_23db68;
        }
    }
    ctx->pc = 0x23DB28u;
    // 0x23db28: 0x83a20010  lb          $v0, 0x10($sp)
    ctx->pc = 0x23db28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23db2c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x23db2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x23db30: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x23db30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x23db34: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x23db34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x23db38: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DB38u;
    {
        const bool branch_taken_0x23db38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23db38) {
            ctx->pc = 0x23DB58u;
            goto label_23db58;
        }
    }
    ctx->pc = 0x23DB40u;
    // 0x23db40: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x23db40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23db44: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x23db44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23db48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x23db48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23db4c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x23db4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x23db50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23DB50u;
    {
        const bool branch_taken_0x23db50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23db50) {
            ctx->pc = 0x23DB68u;
            goto label_23db68;
        }
    }
    ctx->pc = 0x23DB58u;
label_23db58:
    // 0x23db58: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x23db58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23db5c: 0xc78081bc  lwc1        $f0, -0x7E44($gp)
    ctx->pc = 0x23db5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23db60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x23db60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23db64: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x23db64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_23db68:
    // 0x23db68: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x23db68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23db6c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x23db6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x23db70: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23db70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23db74: 0xc08f584  jal         func_23D610
    ctx->pc = 0x23DB74u;
    SET_GPR_U32(ctx, 31, 0x23DB7Cu);
    ctx->pc = 0x23D610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D610u, 0x23DB74u, 0x23DB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB7Cu;
label_23db7c:
    // 0x23db7c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23db80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23db80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23db84: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x23db84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x23db88: 0x3e00008  jr          $ra
    ctx->pc = 0x23DB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DB90u;
}
