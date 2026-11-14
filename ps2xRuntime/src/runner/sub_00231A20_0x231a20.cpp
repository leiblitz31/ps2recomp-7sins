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

// Function: sub_00231A20
// Address: 0x231a20 - 0x231b20
void sub_00231A20_0x231a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231A20_0x231a20");
#endif

    switch (ctx->pc) {
        case 0x231a74u: goto label_231a74;
        case 0x231a9cu: goto label_231a9c;
        case 0x231accu: goto label_231acc;
        case 0x231af4u: goto label_231af4;
        default: break;
    }

    ctx->pc = 0x231a20u;

    // 0x231a20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x231a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x231a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231a28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x231a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x231a2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x231a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x231a30: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x231a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x231a34: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x231a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231a38: 0x3064f000  andi        $a0, $v1, 0xF000
    ctx->pc = 0x231a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x231a3c: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x231a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x231a40: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x231A40u;
    {
        const bool branch_taken_0x231a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x231a40) {
            ctx->pc = 0x231AB4u;
            goto label_231ab4;
        }
    }
    ctx->pc = 0x231A48u;
    // 0x231a48: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x231a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x231a4c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x231A4Cu;
    {
        const bool branch_taken_0x231a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x231a4c) {
            ctx->pc = 0x231A5Cu;
            goto label_231a5c;
        }
    }
    ctx->pc = 0x231A54u;
    // 0x231a54: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x231A54u;
    {
        const bool branch_taken_0x231a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231a54) {
            ctx->pc = 0x231B04u;
            goto label_231b04;
        }
    }
    ctx->pc = 0x231A5Cu;
label_231a5c:
    // 0x231a5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x231a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231a60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231a64: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x231a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x231a68: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x231a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x231a6c: 0xc08c248  jal         func_230920
    ctx->pc = 0x231A6Cu;
    SET_GPR_U32(ctx, 31, 0x231A74u);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x231A6Cu, 0x231A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A74u;
label_231a74:
    // 0x231a74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x231a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231a78: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x231a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231a7c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x231a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231a80: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x231a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x231a84: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x231a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231a88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231a8c: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x231a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x231a90: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x231a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x231a94: 0xc08c248  jal         func_230920
    ctx->pc = 0x231A94u;
    SET_GPR_U32(ctx, 31, 0x231A9Cu);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x231A94u, 0x231A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A9Cu;
label_231a9c:
    // 0x231a9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x231a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231aa0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x231aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231aa4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x231aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231aa8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x231aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x231aac: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x231AACu;
    {
        const bool branch_taken_0x231aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231aac) {
            ctx->pc = 0x231B04u;
            goto label_231b04;
        }
    }
    ctx->pc = 0x231AB4u;
label_231ab4:
    // 0x231ab4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x231ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231ab8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231abc: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x231abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x231ac0: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x231ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x231ac4: 0xc08c1f0  jal         func_2307C0
    ctx->pc = 0x231AC4u;
    SET_GPR_U32(ctx, 31, 0x231ACCu);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x231AC4u, 0x231ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231ACCu;
label_231acc:
    // 0x231acc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x231accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231ad0: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x231ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231ad4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x231ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231ad8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x231ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x231adc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x231adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231ae0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231ae4: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x231ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x231ae8: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x231ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x231aec: 0xc08c1f0  jal         func_2307C0
    ctx->pc = 0x231AECu;
    SET_GPR_U32(ctx, 31, 0x231AF4u);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x231AECu, 0x231AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231AF4u;
label_231af4:
    // 0x231af4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x231af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231af8: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x231af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231afc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x231afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231b00: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x231b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_231b04:
    // 0x231b04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231b08: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x231b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x231b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x231B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231B14u;
    // 0x231b14: 0x0  nop
    ctx->pc = 0x231b14u;
    // NOP
    // 0x231b18: 0x0  nop
    ctx->pc = 0x231b18u;
    // NOP
    // 0x231b1c: 0x0  nop
    ctx->pc = 0x231b1cu;
    // NOP
    ctx->pc = 0x231b20u;
}
