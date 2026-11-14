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

// Function: sub_00418200
// Address: 0x418200 - 0x4182d0
void sub_00418200_0x418200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418200_0x418200");
#endif

    switch (ctx->pc) {
        case 0x4182b8u: goto label_4182b8;
        default: break;
    }

    ctx->pc = 0x418200u;

    // 0x418200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x418200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x418204: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x418204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x418208: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x418208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x41820c: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x41820cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x418210: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x418210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x418214: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x418214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418218: 0xe60c0084  swc1        $f12, 0x84($s0)
    ctx->pc = 0x418218u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x41821c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41821cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x418220: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x418220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x418224: 0xc445001c  lwc1        $f5, 0x1C($v0)
    ctx->pc = 0x418224u;
    { uint32_t bits = FAST_READ32(0x61E89Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x418228: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x418228u;
    {
        const bool branch_taken_0x418228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x41822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418228u;
        // 0x41822c: 0xc4440018  lwc1        $f4, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x418228) {
            ctx->pc = 0x418244u;
            goto label_418244;
        }
    }
    ctx->pc = 0x418230u;
    // 0x418230: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x418230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x418234: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x418234u;
    {
        const bool branch_taken_0x418234 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x418234) {
            ctx->pc = 0x418244u;
            goto label_418244;
        }
    }
    ctx->pc = 0x41823Cu;
    // 0x41823c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x41823Cu;
    {
        const bool branch_taken_0x41823c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x418240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41823Cu;
        // 0x418240: 0xc6020080  lwc1        $f2, 0x80($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41823c) {
            ctx->pc = 0x41825Cu;
            goto label_41825c;
        }
    }
    ctx->pc = 0x418244u;
label_418244:
    // 0x418244: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x418244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x418248: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x418248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41824c: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x41824cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x418250: 0xc6020080  lwc1        $f2, 0x80($s0)
    ctx->pc = 0x418250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x418254: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x418254u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x418258: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x418258u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_41825c:
    // 0x41825c: 0x46042841  sub.s       $f1, $f5, $f4
    ctx->pc = 0x41825cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x418260: 0xc7808048  lwc1        $f0, -0x7FB8($gp)
    ctx->pc = 0x418260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x418264: 0x460260c1  sub.s       $f3, $f12, $f2
    ctx->pc = 0x418264u;
    ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x418268: 0x46026080  add.s       $f2, $f12, $f2
    ctx->pc = 0x418268u;
    ctx->f[2] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x41826c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x41826cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x418270: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x418270u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x418274: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x418274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x418278: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x418278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x41827c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x41827cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x418280: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x418280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x418284: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x418284u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x418288: 0x46042841  sub.s       $f1, $f5, $f4
    ctx->pc = 0x418288u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x41828c: 0x46042800  add.s       $f0, $f5, $f4
    ctx->pc = 0x41828cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x418290: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x418290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x418294: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x418294u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x418298: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x418298u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x41829c: 0xe601008c  swc1        $f1, 0x8C($s0)
    ctx->pc = 0x41829cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x4182a0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4182a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4182a4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4182a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4182a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4182A8u;
    {
        const bool branch_taken_0x4182a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4182ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4182A8u;
        // 0x4182ac: 0xe6000090  swc1        $f0, 0x90($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4182a8) {
            ctx->pc = 0x4182B8u;
            goto label_4182b8;
        }
    }
    ctx->pc = 0x4182B0u;
    // 0x4182b0: 0xc106794  jal         func_419E50
    ctx->pc = 0x4182B0u;
    SET_GPR_U32(ctx, 31, 0x4182B8u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x4182B0u, 0x4182B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4182B8u;
label_4182b8:
    // 0x4182b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4182b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4182bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4182bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4182c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4182c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4182c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4182C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4182C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4182C4u;
        // 0x4182c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4182C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4182CCu;
    // 0x4182cc: 0x0  nop
    ctx->pc = 0x4182ccu;
    // NOP
    ctx->pc = 0x4182d0u;
}
