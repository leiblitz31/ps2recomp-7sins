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

// Function: sub_00479540
// Address: 0x479540 - 0x479610
void sub_00479540_0x479540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479540_0x479540");
#endif

    switch (ctx->pc) {
        case 0x479570u: goto label_479570;
        case 0x47957cu: goto label_47957c;
        case 0x479590u: goto label_479590;
        case 0x4795ccu: goto label_4795cc;
        case 0x4795f4u: goto label_4795f4;
        default: break;
    }

    ctx->pc = 0x479540u;

    // 0x479540: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x479540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x479544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x479544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x479548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x479548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47954c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x47954cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x479550: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x479550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x479554: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x479554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x479558: 0xa3a80070  sb          $t0, 0x70($sp)
    ctx->pc = 0x479558u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 8));
    // 0x47955c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x47955cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479560: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x479560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x479564: 0x83a60070  lb          $a2, 0x70($sp)
    ctx->pc = 0x479564u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x479568: 0xc11e678  jal         func_4799E0
    ctx->pc = 0x479568u;
    SET_GPR_U32(ctx, 31, 0x479570u);
    ctx->pc = 0x4799E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4799E0u, 0x479568u, 0x479570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479570u;
label_479570:
    // 0x479570: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x479570u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x479574: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x479574u;
    {
        const bool branch_taken_0x479574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479574) {
            ctx->pc = 0x4795D0u;
            goto label_4795d0;
        }
    }
    ctx->pc = 0x47957Cu;
label_47957c:
    // 0x47957c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x47957cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x479580: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x479580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479584: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x479584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479588: 0xc11e3bc  jal         func_478EF0
    ctx->pc = 0x479588u;
    SET_GPR_U32(ctx, 31, 0x479590u);
    ctx->pc = 0x478EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478EF0u, 0x479588u, 0x479590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479590u;
label_479590:
    // 0x479590: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x479590u;
    {
        const bool branch_taken_0x479590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x479590) {
            ctx->pc = 0x4795CCu;
            goto label_4795cc;
        }
    }
    ctx->pc = 0x479598u;
    // 0x479598: 0x27a20028  addiu       $v0, $sp, 0x28
    ctx->pc = 0x479598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x47959c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x47959cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4795a0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x4795a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4795a4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x4795a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4795a8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x4795a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4795ac: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x4795acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4795b0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x4795b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4795b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4795b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4795b8: 0xdfa70028  ld          $a3, 0x28($sp)
    ctx->pc = 0x4795b8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4795bc: 0x83a80070  lb          $t0, 0x70($sp)
    ctx->pc = 0x4795bcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4795c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4795c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4795c4: 0xc11e5a4  jal         func_479690
    ctx->pc = 0x4795C4u;
    SET_GPR_U32(ctx, 31, 0x4795CCu);
    ctx->pc = 0x479690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x479690u, 0x4795C4u, 0x4795CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4795CCu;
label_4795cc:
    // 0x4795cc: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x4795ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_4795d0:
    // 0x4795d0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4795d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4795d4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x4795d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4795d8: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x4795D8u;
    {
        const bool branch_taken_0x4795d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4795d8) {
            ctx->pc = 0x47957Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47957c;
        }
    }
    ctx->pc = 0x4795E0u;
    // 0x4795e0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x4795e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4795e4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x4795e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4795e8: 0x83a60070  lb          $a2, 0x70($sp)
    ctx->pc = 0x4795e8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4795ec: 0xc11e584  jal         func_479610
    ctx->pc = 0x4795ECu;
    SET_GPR_U32(ctx, 31, 0x4795F4u);
    ctx->pc = 0x479610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x479610u, 0x4795ECu, 0x4795F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4795F4u;
label_4795f4:
    // 0x4795f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4795f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4795f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4795f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4795fc: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x4795fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x479600: 0x3e00008  jr          $ra
    ctx->pc = 0x479600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x479608u;
    // 0x479608: 0x0  nop
    ctx->pc = 0x479608u;
    // NOP
    // 0x47960c: 0x0  nop
    ctx->pc = 0x47960cu;
    // NOP
    ctx->pc = 0x479610u;
}
