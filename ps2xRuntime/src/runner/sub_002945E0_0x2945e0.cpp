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

// Function: sub_002945E0
// Address: 0x2945e0 - 0x294740
void sub_002945E0_0x2945e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002945E0_0x2945e0");
#endif

    switch (ctx->pc) {
        case 0x294620u: goto label_294620;
        case 0x294658u: goto label_294658;
        case 0x294664u: goto label_294664;
        case 0x294688u: goto label_294688;
        case 0x294708u: goto label_294708;
        default: break;
    }

    ctx->pc = 0x2945e0u;

    // 0x2945e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2945e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2945e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2945e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2945e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2945e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2945ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2945ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2945f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2945f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2945f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2945f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2945f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2945f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2945fc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2945fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x294600: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x294600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x294604: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x294604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x294608: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x294608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29460c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x29460cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x294610: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x294610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x294614: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x294614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x294618: 0xc106784  jal         func_419E10
    ctx->pc = 0x294618u;
    SET_GPR_U32(ctx, 31, 0x294620u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x294618u, 0x294620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294620u;
label_294620:
    // 0x294620: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x294620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x294624: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x294624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x294628: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x294628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29462c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x29462cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294630: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x294630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294634: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x294634u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x294638: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x294638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x29463c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x29463cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x294640: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x294640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x294644: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x294644u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x294648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29464c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29464cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294650: 0xc0e33ee  jal         func_38CFB8
    ctx->pc = 0x294650u;
    SET_GPR_U32(ctx, 31, 0x294658u);
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x294650u, 0x294658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294658u;
label_294658:
    // 0x294658: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x294658u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29465c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x29465Cu;
    {
        const bool branch_taken_0x29465c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29465c) {
            ctx->pc = 0x2946ECu;
            goto label_2946ec;
        }
    }
    ctx->pc = 0x294664u;
label_294664:
    // 0x294664: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x294664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x294668: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x294668u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x29466c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29466cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x294670: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x294670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x294674: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x294674u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294678: 0x8e930014  lw          $s3, 0x14($s4)
    ctx->pc = 0x294678u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x29467c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29467cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294680: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x294680u;
    {
        const bool branch_taken_0x294680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294680) {
            ctx->pc = 0x2946D8u;
            goto label_2946d8;
        }
    }
    ctx->pc = 0x294688u;
label_294688:
    // 0x294688: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x294688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x29468c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x29468cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x294690: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x294690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x294694: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x294694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x294698: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x294698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29469c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x29469cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2946a0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2946a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2946a4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2946a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2946a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2946a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2946ac: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2946ACu;
    {
        const bool branch_taken_0x2946ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2946ac) {
            ctx->pc = 0x2946D4u;
            goto label_2946d4;
        }
    }
    ctx->pc = 0x2946B4u;
    // 0x2946b4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2946b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2946b8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2946b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2946bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2946bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2946c0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2946c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2946c4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2946c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2946c8: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2946c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2946cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2946ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2946d0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2946d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_2946d4:
    // 0x2946d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2946d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2946d8:
    // 0x2946d8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2946d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2946dc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2946dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2946e0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2946E0u;
    {
        const bool branch_taken_0x2946e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2946e0) {
            ctx->pc = 0x294688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294688;
        }
    }
    ctx->pc = 0x2946E8u;
    // 0x2946e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2946e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2946ec:
    // 0x2946ec: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2946ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2946f0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2946f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2946f4: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2946F4u;
    {
        const bool branch_taken_0x2946f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2946f4) {
            ctx->pc = 0x294664u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294664;
        }
    }
    ctx->pc = 0x2946FCu;
    // 0x2946fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2946fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294700: 0xc0e2d08  jal         func_38B420
    ctx->pc = 0x294700u;
    SET_GPR_U32(ctx, 31, 0x294708u);
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x294700u, 0x294708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294708u;
label_294708:
    // 0x294708: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x294708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29470c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x29470cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x294710: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x294710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x294714: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x294714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x294718: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x294718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29471c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29471cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x294720: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x294720u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294724: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x294724u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294728: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x294728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29472c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29472cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294730: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x294730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x294734: 0x3e00008  jr          $ra
    ctx->pc = 0x294734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29473Cu;
    // 0x29473c: 0x0  nop
    ctx->pc = 0x29473cu;
    // NOP
    ctx->pc = 0x294740u;
}
