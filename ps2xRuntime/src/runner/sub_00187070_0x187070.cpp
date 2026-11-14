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

// Function: sub_00187070
// Address: 0x187070 - 0x187140
void sub_00187070_0x187070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187070_0x187070");
#endif

    switch (ctx->pc) {
        case 0x18709cu: goto label_18709c;
        case 0x1870b8u: goto label_1870b8;
        case 0x1870fcu: goto label_1870fc;
        case 0x187114u: goto label_187114;
        case 0x18712cu: goto label_18712c;
        default: break;
    }

    ctx->pc = 0x187070u;

    // 0x187070: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x187070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x187074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187078: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x187078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18707c: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x18707cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x187080: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x187080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187084: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x187084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187088: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x187088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x18708c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x18708cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x187090: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x187090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187094: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x187094u;
    SET_GPR_U32(ctx, 31, 0x18709Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x187094u, 0x18709Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18709Cu;
label_18709c:
    // 0x18709c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x18709cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1870a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1870a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1870a4: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x1870a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1870a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1870a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1870ac: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1870acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1870b0: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1870B0u;
    SET_GPR_U32(ctx, 31, 0x1870B8u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1870B0u, 0x1870B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1870B8u;
label_1870b8:
    // 0x1870b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1870b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1870bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1870bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1870c0: 0x0  nop
    ctx->pc = 0x1870c0u;
    // NOP
    // 0x1870c4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1870c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1870c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1870c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1870cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1870ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1870d0: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x1870d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1870d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1870d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1870d8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1870d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1870dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1870dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1870e0: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1870e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1870e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1870e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1870e8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1870e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1870ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1870ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1870f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1870f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1870f4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1870F4u;
    SET_GPR_U32(ctx, 31, 0x1870FCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1870F4u, 0x1870FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1870FCu;
label_1870fc:
    // 0x1870fc: 0x93a20030  lbu         $v0, 0x30($sp)
    ctx->pc = 0x1870fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187100: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x187100u;
    {
        const bool branch_taken_0x187100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187100) {
            ctx->pc = 0x18711Cu;
            goto label_18711c;
        }
    }
    ctx->pc = 0x187108u;
    // 0x187108: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x187108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18710c: 0xc061c50  jal         func_187140
    ctx->pc = 0x18710Cu;
    SET_GPR_U32(ctx, 31, 0x187114u);
    ctx->pc = 0x187140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187140u, 0x18710Cu, 0x187114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187114u;
label_187114:
    // 0x187114: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x187114u;
    {
        const bool branch_taken_0x187114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187114) {
            ctx->pc = 0x18712Cu;
            goto label_18712c;
        }
    }
    ctx->pc = 0x18711Cu;
label_18711c:
    // 0x18711c: 0x8f84ba64  lw          $a0, -0x459C($gp)
    ctx->pc = 0x18711cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949476)));
    // 0x187120: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x187120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x187124: 0xc04c608  jal         func_131820
    ctx->pc = 0x187124u;
    SET_GPR_U32(ctx, 31, 0x18712Cu);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x187124u, 0x18712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18712Cu;
label_18712c:
    // 0x18712c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18712cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187130: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x187130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x187134: 0x3e00008  jr          $ra
    ctx->pc = 0x187134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18713Cu;
    // 0x18713c: 0x0  nop
    ctx->pc = 0x18713cu;
    // NOP
    ctx->pc = 0x187140u;
}
