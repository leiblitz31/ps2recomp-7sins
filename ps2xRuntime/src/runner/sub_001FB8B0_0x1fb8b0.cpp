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

// Function: sub_001FB8B0
// Address: 0x1fb8b0 - 0x1fb980
void sub_001FB8B0_0x1fb8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB8B0_0x1fb8b0");
#endif

    switch (ctx->pc) {
        case 0x1fb908u: goto label_1fb908;
        case 0x1fb914u: goto label_1fb914;
        case 0x1fb92cu: goto label_1fb92c;
        case 0x1fb954u: goto label_1fb954;
        default: break;
    }

    ctx->pc = 0x1fb8b0u;

    // 0x1fb8b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1fb8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1fb8b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fb8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fb8b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fb8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fb8bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fb8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fb8c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fb8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fb8c4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1fb8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1fb8c8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1fb8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1fb8cc: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x1fb8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x1fb8d0: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x1fb8d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1fb8d4: 0xe7ad0080  swc1        $f13, 0x80($sp)
    ctx->pc = 0x1fb8d4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1fb8d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fb8d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb8dc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fb8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fb8e0: 0x8c63bfb4  lw          $v1, -0x404C($v1)
    ctx->pc = 0x1fb8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFB4u));
    // 0x1fb8e4: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1fb8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1fb8e8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fb8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fb8ec: 0x8c63bfb4  lw          $v1, -0x404C($v1)
    ctx->pc = 0x1fb8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFB4u));
    // 0x1fb8f0: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x1fb8f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fb8f4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fb8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fb8f8: 0x8c63bfb4  lw          $v1, -0x404C($v1)
    ctx->pc = 0x1fb8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFB4u));
    // 0x1fb8fc: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x1fb8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1fb900: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1FB900u;
    {
        const bool branch_taken_0x1fb900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb900) {
            ctx->pc = 0x1FB958u;
            goto label_1fb958;
        }
    }
    ctx->pc = 0x1FB908u;
label_1fb908:
    // 0x1fb908: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1fb908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fb90c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FB90Cu;
    SET_GPR_U32(ctx, 31, 0x1FB914u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FB90Cu, 0x1FB914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB914u;
label_1fb914:
    // 0x1fb914: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fb914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb918: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1fb918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fb91c: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1fb91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1fb920: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fb920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb924: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1FB924u;
    SET_GPR_U32(ctx, 31, 0x1FB92Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1FB924u, 0x1FB92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB92Cu;
label_1fb92c:
    // 0x1fb92c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fb92cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fb930: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fb930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb934: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x1fb934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fb938: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x1fb938u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fb93c: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x1fb93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fb940: 0xc7ad0080  lwc1        $f13, 0x80($sp)
    ctx->pc = 0x1fb940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fb944: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fb944u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb948: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fb948u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb94c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1FB94Cu;
    SET_GPR_U32(ctx, 31, 0x1FB954u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FB94Cu, 0x1FB954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB954u;
label_1fb954:
    // 0x1fb954: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fb954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fb958:
    // 0x1fb958: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1fb958u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1fb95c: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1FB95Cu;
    {
        const bool branch_taken_0x1fb95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb95c) {
            ctx->pc = 0x1FB908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb908;
        }
    }
    ctx->pc = 0x1FB964u;
    // 0x1fb964: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fb964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fb968: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fb968u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fb96c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fb96cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb970: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fb970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb974: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1fb974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1fb978: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB980u;
}
