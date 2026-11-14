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

// Function: sub_002DAFA0
// Address: 0x2dafa0 - 0x2db080
void sub_002DAFA0_0x2dafa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAFA0_0x2dafa0");
#endif

    switch (ctx->pc) {
        case 0x2dafc4u: goto label_2dafc4;
        case 0x2dafe0u: goto label_2dafe0;
        case 0x2daffcu: goto label_2daffc;
        case 0x2db024u: goto label_2db024;
        case 0x2db04cu: goto label_2db04c;
        case 0x2db060u: goto label_2db060;
        default: break;
    }

    ctx->pc = 0x2dafa0u;

    // 0x2dafa0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2dafa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2dafa4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2dafa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2dafa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dafa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dafac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dafacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dafb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dafb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dafb4: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2dafb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x2dafb8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2dafb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dafbc: 0xc09d234  jal         func_2748D0
    ctx->pc = 0x2DAFBCu;
    SET_GPR_U32(ctx, 31, 0x2DAFC4u);
    ctx->pc = 0x2748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748D0u, 0x2DAFBCu, 0x2DAFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAFC4u;
label_2dafc4:
    // 0x2dafc4: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x2dafc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2dafc8: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2DAFC8u;
    {
        const bool branch_taken_0x2dafc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dafc8) {
            ctx->pc = 0x2DB060u;
            goto label_2db060;
        }
    }
    ctx->pc = 0x2DAFD0u;
    // 0x2dafd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dafd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dafd4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2dafd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2dafd8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DAFD8u;
    SET_GPR_U32(ctx, 31, 0x2DAFE0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DAFD8u, 0x2DAFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAFE0u;
label_2dafe0:
    // 0x2dafe0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dafe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dafe4: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2DAFE4u;
    {
        const bool branch_taken_0x2dafe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dafe4) {
            ctx->pc = 0x2DB060u;
            goto label_2db060;
        }
    }
    ctx->pc = 0x2DAFECu;
    // 0x2dafec: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2dafecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2daff0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2daff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daff4: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2DAFF4u;
    SET_GPR_U32(ctx, 31, 0x2DAFFCu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2DAFF4u, 0x2DAFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAFFCu;
label_2daffc:
    // 0x2daffc: 0x27a30048  addiu       $v1, $sp, 0x48
    ctx->pc = 0x2daffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2db000: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2db000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2db004: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2db004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2db008: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2db008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db00c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2db00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db010: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2db010u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2db014: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2db014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2db018: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2db018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2db01c: 0xc12242c  jal         func_4890B0
    ctx->pc = 0x2DB01Cu;
    SET_GPR_U32(ctx, 31, 0x2DB024u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x2DB01Cu, 0x2DB024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB024u;
label_2db024:
    // 0x2db024: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2db024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db028: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2db028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x2db02c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2db02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db030: 0x0  nop
    ctx->pc = 0x2db030u;
    // NOP
    // 0x2db034: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2db034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2db038: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2db038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db03c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2db03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2db040: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x2db040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2db044: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x2DB044u;
    SET_GPR_U32(ctx, 31, 0x2DB04Cu);
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x2DB044u, 0x2DB04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB04Cu;
label_2db04c:
    // 0x2db04c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2db04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2db050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2db050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db054: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x2db054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2db058: 0xc08d69c  jal         func_235A70
    ctx->pc = 0x2DB058u;
    SET_GPR_U32(ctx, 31, 0x2DB060u);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x2DB058u, 0x2DB060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB060u;
label_2db060:
    // 0x2db060: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2db060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2db064: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2db064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db068: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2db068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db06c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2db06cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db070: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2db070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2db074: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB07Cu;
    // 0x2db07c: 0x0  nop
    ctx->pc = 0x2db07cu;
    // NOP
    ctx->pc = 0x2db080u;
}
