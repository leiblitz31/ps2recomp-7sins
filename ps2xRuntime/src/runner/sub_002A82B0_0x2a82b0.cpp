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

// Function: sub_002A82B0
// Address: 0x2a82b0 - 0x2a83a0
void sub_002A82B0_0x2a82b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A82B0_0x2a82b0");
#endif

    switch (ctx->pc) {
        case 0x2a82e4u: goto label_2a82e4;
        case 0x2a82f4u: goto label_2a82f4;
        case 0x2a832cu: goto label_2a832c;
        case 0x2a833cu: goto label_2a833c;
        case 0x2a8384u: goto label_2a8384;
        default: break;
    }

    ctx->pc = 0x2a82b0u;

    // 0x2a82b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a82b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a82b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a82b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a82b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a82b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a82bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2a82bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2a82c0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2a82c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2a82c4: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x2a82c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a82c8: 0x92020078  lbu         $v0, 0x78($s0)
    ctx->pc = 0x2a82c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2a82cc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A82CCu;
    {
        const bool branch_taken_0x2a82cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a82cc) {
            ctx->pc = 0x2A8300u;
            goto label_2a8300;
        }
    }
    ctx->pc = 0x2A82D4u;
    // 0x2a82d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a82d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a82d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a82dc: 0xc09d250  jal         func_274940
    ctx->pc = 0x2A82DCu;
    SET_GPR_U32(ctx, 31, 0x2A82E4u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2A82DCu, 0x2A82E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A82E4u;
label_2a82e4:
    // 0x2a82e4: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x2a82e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2a82e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a82e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82ec: 0xc121904  jal         func_486410
    ctx->pc = 0x2A82ECu;
    SET_GPR_U32(ctx, 31, 0x2A82F4u);
    ctx->pc = 0x486410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486410u, 0x2A82ECu, 0x2A82F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A82F4u;
label_2a82f4:
    // 0x2a82f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a82f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82f8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2A82F8u;
    {
        const bool branch_taken_0x2a82f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a82f8) {
            ctx->pc = 0x2A834Cu;
            goto label_2a834c;
        }
    }
    ctx->pc = 0x2A8300u;
label_2a8300:
    // 0x2a8300: 0xc601007c  lwc1        $f1, 0x7C($s0)
    ctx->pc = 0x2a8300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8304: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2a8304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2a8308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a830c: 0x0  nop
    ctx->pc = 0x2a830cu;
    // NOP
    // 0x2a8310: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a8310u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8314: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2A8314u;
    {
        const bool branch_taken_0x2a8314 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8314) {
            ctx->pc = 0x2A8348u;
            goto label_2a8348;
        }
    }
    ctx->pc = 0x2A831Cu;
    // 0x2a831c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a831cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8320: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a8320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a8324: 0xc09d250  jal         func_274940
    ctx->pc = 0x2A8324u;
    SET_GPR_U32(ctx, 31, 0x2A832Cu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2A8324u, 0x2A832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A832Cu;
label_2a832c:
    // 0x2a832c: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x2a832cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2a8330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8334: 0xc121904  jal         func_486410
    ctx->pc = 0x2A8334u;
    SET_GPR_U32(ctx, 31, 0x2A833Cu);
    ctx->pc = 0x486410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486410u, 0x2A8334u, 0x2A833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A833Cu;
label_2a833c:
    // 0x2a833c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a833cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8340u;
    {
        const bool branch_taken_0x2a8340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8340) {
            ctx->pc = 0x2A834Cu;
            goto label_2a834c;
        }
    }
    ctx->pc = 0x2A8348u;
label_2a8348:
    // 0x2a8348: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a8348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2a834c:
    // 0x2a834c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a834cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a8350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8354: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2a8354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a8358: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8360u;
    // 0x2a8360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a8360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a8364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a8364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a8368: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a8368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a836c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2a836cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2a8370: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a8370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a8374: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2a8374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8378: 0x2405052f  addiu       $a1, $zero, 0x52F
    ctx->pc = 0x2a8378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1327));
    // 0x2a837c: 0xc042090  jal         func_108240
    ctx->pc = 0x2A837Cu;
    SET_GPR_U32(ctx, 31, 0x2A8384u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2A837Cu, 0x2A8384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8384u;
label_2a8384:
    // 0x2a8384: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2a8384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8388: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x2a8388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x2a838c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a838cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8390: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a8390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a8394: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A839Cu;
    // 0x2a839c: 0x0  nop
    ctx->pc = 0x2a839cu;
    // NOP
    ctx->pc = 0x2a83a0u;
}
