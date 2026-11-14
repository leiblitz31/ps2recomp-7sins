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

// Function: sub_00290250
// Address: 0x290250 - 0x290330
void sub_00290250_0x290250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290250_0x290250");
#endif

    switch (ctx->pc) {
        case 0x290274u: goto label_290274;
        case 0x2902ccu: goto label_2902cc;
        case 0x2902dcu: goto label_2902dc;
        case 0x2902f4u: goto label_2902f4;
        case 0x29030cu: goto label_29030c;
        default: break;
    }

    ctx->pc = 0x290250u;

    // 0x290250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x290250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x290254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x290254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x290258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29025c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29025cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x290260: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x290260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x290264: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x290264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290268: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x290268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29026c: 0xc091174  jal         func_2445D0
    ctx->pc = 0x29026Cu;
    SET_GPR_U32(ctx, 31, 0x290274u);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x29026Cu, 0x290274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290274u;
label_290274:
    // 0x290274: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x290274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x290278: 0x24635ff0  addiu       $v1, $v1, 0x5FF0
    ctx->pc = 0x290278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24560));
    // 0x29027c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29027cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290280: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x290280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x290284: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x290284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290288: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x290288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29028c: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x29028cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x290290: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x290290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290294: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x290294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290298: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x290298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x29029c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29029cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2902a0: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x2902a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x2902a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2902a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2902a8: 0xa0400068  sb          $zero, 0x68($v0)
    ctx->pc = 0x2902a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x2902ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2902acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2902b0: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x2902b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x2902b4: 0x8f82bc1c  lw          $v0, -0x43E4($gp)
    ctx->pc = 0x2902b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949916)));
    // 0x2902b8: 0x14020010  bne         $zero, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2902B8u;
    {
        const bool branch_taken_0x2902b8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x2902b8) {
            ctx->pc = 0x2902FCu;
            goto label_2902fc;
        }
    }
    ctx->pc = 0x2902C0u;
    // 0x2902c0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2902c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2902c4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2902C4u;
    SET_GPR_U32(ctx, 31, 0x2902CCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2902C4u, 0x2902CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2902CCu;
label_2902cc:
    // 0x2902cc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2902ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2902d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2902d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2902d4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2902D4u;
    SET_GPR_U32(ctx, 31, 0x2902DCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2902D4u, 0x2902DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2902DCu;
label_2902dc:
    // 0x2902dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2902dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2902e0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2902E0u;
    {
        const bool branch_taken_0x2902e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2902e0) {
            ctx->pc = 0x2902F8u;
            goto label_2902f8;
        }
    }
    ctx->pc = 0x2902E8u;
    // 0x2902e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2902e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2902ec: 0xc0a41d0  jal         func_290740
    ctx->pc = 0x2902ECu;
    SET_GPR_U32(ctx, 31, 0x2902F4u);
    ctx->pc = 0x290740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290740u, 0x2902ECu, 0x2902F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2902F4u;
label_2902f4:
    // 0x2902f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2902f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2902f8:
    // 0x2902f8: 0xaf90bc1c  sw          $s0, -0x43E4($gp)
    ctx->pc = 0x2902f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949916), GPR_U32(ctx, 16));
label_2902fc:
    // 0x2902fc: 0x8f84bc1c  lw          $a0, -0x43E4($gp)
    ctx->pc = 0x2902fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949916)));
    // 0x290300: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x290300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x290304: 0xc0a40cc  jal         func_290330
    ctx->pc = 0x290304u;
    SET_GPR_U32(ctx, 31, 0x29030Cu);
    ctx->pc = 0x290330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290330u, 0x290304u, 0x29030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29030Cu;
label_29030c:
    // 0x29030c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29030cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290310: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x290310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290318: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x290318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29031c: 0x3e00008  jr          $ra
    ctx->pc = 0x29031Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29031Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290324u;
    // 0x290324: 0x0  nop
    ctx->pc = 0x290324u;
    // NOP
    // 0x290328: 0x0  nop
    ctx->pc = 0x290328u;
    // NOP
    // 0x29032c: 0x0  nop
    ctx->pc = 0x29032cu;
    // NOP
    ctx->pc = 0x290330u;
}
