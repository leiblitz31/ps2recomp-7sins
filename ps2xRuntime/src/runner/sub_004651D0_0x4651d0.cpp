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

// Function: sub_004651D0
// Address: 0x4651d0 - 0x465270
void sub_004651D0_0x4651d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004651D0_0x4651d0");
#endif

    switch (ctx->pc) {
        case 0x465200u: goto label_465200;
        case 0x46521cu: goto label_46521c;
        case 0x46523cu: goto label_46523c;
        default: break;
    }

    ctx->pc = 0x4651d0u;

    // 0x4651d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4651d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4651d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4651d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4651d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4651d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4651dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4651dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4651e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4651e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4651e4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x4651e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x4651e8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x4651e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x4651ec: 0xa7a60060  sh          $a2, 0x60($sp)
    ctx->pc = 0x4651ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 6));
    // 0x4651f0: 0x8fb10050  lw          $s1, 0x50($sp)
    ctx->pc = 0x4651f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4651f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4651f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4651f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4651F8u;
    {
        const bool branch_taken_0x4651f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4651f8) {
            ctx->pc = 0x465208u;
            goto label_465208;
        }
    }
    ctx->pc = 0x465200u;
label_465200:
    // 0x465200: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x465200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x465204: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x465204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_465208:
    // 0x465208: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x465208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46520c: 0x97a50060  lhu         $a1, 0x60($sp)
    ctx->pc = 0x46520cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x465210: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x465210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465214: 0xc056628  jal         func_1598A0
    ctx->pc = 0x465214u;
    SET_GPR_U32(ctx, 31, 0x46521Cu);
    ctx->pc = 0x1598A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1598A0u, 0x465214u, 0x46521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46521Cu;
label_46521c:
    // 0x46521c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x46521cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465220: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x465220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x465224: 0x1443fff6  bne         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x465224u;
    {
        const bool branch_taken_0x465224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x465224) {
            ctx->pc = 0x465200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_465200;
        }
    }
    ctx->pc = 0x46522Cu;
    // 0x46522c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x46522cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x465230: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x465230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465234: 0xc0563b8  jal         func_158EE0
    ctx->pc = 0x465234u;
    SET_GPR_U32(ctx, 31, 0x46523Cu);
    ctx->pc = 0x158EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158EE0u, 0x465234u, 0x46523Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46523Cu;
label_46523c:
    // 0x46523c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x46523cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x465240: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x465240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x465244: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x465244u;
    {
        const bool branch_taken_0x465244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x465244) {
            ctx->pc = 0x465250u;
            goto label_465250;
        }
    }
    ctx->pc = 0x46524Cu;
    // 0x46524c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x46524cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_465250:
    // 0x465250: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x465250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465254: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x465254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x465258: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x465258u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46525c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46525cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x465260: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x465260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x465264: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x465264u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x465268: 0x3e00008  jr          $ra
    ctx->pc = 0x465268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465270u;
}
