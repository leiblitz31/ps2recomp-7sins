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

// Function: sub_00231C10
// Address: 0x231c10 - 0x231d10
void sub_00231C10_0x231c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231C10_0x231c10");
#endif

    switch (ctx->pc) {
        case 0x231c64u: goto label_231c64;
        case 0x231c8cu: goto label_231c8c;
        case 0x231cbcu: goto label_231cbc;
        case 0x231ce4u: goto label_231ce4;
        default: break;
    }

    ctx->pc = 0x231c10u;

    // 0x231c10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x231c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x231c14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231c18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x231c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x231c1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x231c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x231c20: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x231c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x231c24: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x231c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231c28: 0x3064f000  andi        $a0, $v1, 0xF000
    ctx->pc = 0x231c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x231c2c: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x231c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x231c30: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x231C30u;
    {
        const bool branch_taken_0x231c30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x231c30) {
            ctx->pc = 0x231CA4u;
            goto label_231ca4;
        }
    }
    ctx->pc = 0x231C38u;
    // 0x231c38: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x231c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x231c3c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x231C3Cu;
    {
        const bool branch_taken_0x231c3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x231c3c) {
            ctx->pc = 0x231C4Cu;
            goto label_231c4c;
        }
    }
    ctx->pc = 0x231C44u;
    // 0x231c44: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x231C44u;
    {
        const bool branch_taken_0x231c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231c44) {
            ctx->pc = 0x231CF4u;
            goto label_231cf4;
        }
    }
    ctx->pc = 0x231C4Cu;
label_231c4c:
    // 0x231c4c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x231c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231c50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231c54: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x231c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x231c58: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x231c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x231c5c: 0xc08c248  jal         func_230920
    ctx->pc = 0x231C5Cu;
    SET_GPR_U32(ctx, 31, 0x231C64u);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x231C5Cu, 0x231C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C64u;
label_231c64:
    // 0x231c64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x231c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231c68: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x231c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231c6c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x231c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231c70: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x231c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x231c74: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x231c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231c78: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231c7c: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x231c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x231c80: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x231c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x231c84: 0xc08c248  jal         func_230920
    ctx->pc = 0x231C84u;
    SET_GPR_U32(ctx, 31, 0x231C8Cu);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x231C84u, 0x231C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C8Cu;
label_231c8c:
    // 0x231c8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x231c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231c90: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x231c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231c94: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x231c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231c98: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x231c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x231c9c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x231C9Cu;
    {
        const bool branch_taken_0x231c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231c9c) {
            ctx->pc = 0x231CF4u;
            goto label_231cf4;
        }
    }
    ctx->pc = 0x231CA4u;
label_231ca4:
    // 0x231ca4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x231ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231ca8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231cac: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x231cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x231cb0: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x231cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x231cb4: 0xc08c1f0  jal         func_2307C0
    ctx->pc = 0x231CB4u;
    SET_GPR_U32(ctx, 31, 0x231CBCu);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x231CB4u, 0x231CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231CBCu;
label_231cbc:
    // 0x231cbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x231cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231cc0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x231cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231cc4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x231cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231cc8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x231cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x231ccc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x231cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231cd0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231cd4: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x231cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x231cd8: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x231cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x231cdc: 0xc08c1f0  jal         func_2307C0
    ctx->pc = 0x231CDCu;
    SET_GPR_U32(ctx, 31, 0x231CE4u);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x231CDCu, 0x231CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231CE4u;
label_231ce4:
    // 0x231ce4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x231ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231ce8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x231ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231cec: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x231cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231cf0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x231cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_231cf4:
    // 0x231cf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231cf8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x231cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x231cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x231CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231D04u;
    // 0x231d04: 0x0  nop
    ctx->pc = 0x231d04u;
    // NOP
    // 0x231d08: 0x0  nop
    ctx->pc = 0x231d08u;
    // NOP
    // 0x231d0c: 0x0  nop
    ctx->pc = 0x231d0cu;
    // NOP
    ctx->pc = 0x231d10u;
}
