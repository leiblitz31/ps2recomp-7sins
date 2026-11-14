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

// Function: sub_0019A570
// Address: 0x19a570 - 0x19a710
void sub_0019A570_0x19a570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A570_0x19a570");
#endif

    switch (ctx->pc) {
        case 0x19a600u: goto label_19a600;
        case 0x19a628u: goto label_19a628;
        case 0x19a650u: goto label_19a650;
        case 0x19a678u: goto label_19a678;
        case 0x19a6a0u: goto label_19a6a0;
        case 0x19a6d8u: goto label_19a6d8;
        case 0x19a6ecu: goto label_19a6ec;
        default: break;
    }

    ctx->pc = 0x19a570u;

    // 0x19a570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19a570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19a574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19a574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19a578: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x19a578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19a57c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19a57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x19a580: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x19a580u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x19a584: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19a584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a588: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x19a588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19a58c: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x19a58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19a590: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19a590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a594: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19a594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a598: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a59c: 0x0  nop
    ctx->pc = 0x19a59cu;
    // NOP
    // 0x19a5a0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19a5a0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x19a5a4: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x19a5a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x19a5a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a5ac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19a5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19a5b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a5b4: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x19a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x19a5b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19a5bc: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x19A5BCu;
    {
        const bool branch_taken_0x19a5bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19a5bc) {
            ctx->pc = 0x19A664u;
            goto label_19a664;
        }
    }
    ctx->pc = 0x19A5C4u;
    // 0x19a5c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a5c8: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x19A5C8u;
    {
        const bool branch_taken_0x19a5c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19a5c8) {
            ctx->pc = 0x19A63Cu;
            goto label_19a63c;
        }
    }
    ctx->pc = 0x19A5D0u;
    // 0x19a5d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a5d4: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19A5D4u;
    {
        const bool branch_taken_0x19a5d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19a5d4) {
            ctx->pc = 0x19A614u;
            goto label_19a614;
        }
    }
    ctx->pc = 0x19A5DCu;
    // 0x19a5dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A5DCu;
    {
        const bool branch_taken_0x19a5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a5dc) {
            ctx->pc = 0x19A5ECu;
            goto label_19a5ec;
        }
    }
    ctx->pc = 0x19A5E4u;
    // 0x19a5e4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x19A5E4u;
    {
        const bool branch_taken_0x19a5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a5e4) {
            ctx->pc = 0x19A68Cu;
            goto label_19a68c;
        }
    }
    ctx->pc = 0x19A5ECu;
label_19a5ec:
    // 0x19a5ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a5f0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19a5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19a5f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19a5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a5f8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19A5F8u;
    SET_GPR_U32(ctx, 31, 0x19A600u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19A5F8u, 0x19A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A600u;
label_19a600:
    // 0x19a600: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19a600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a604: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19a604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a608: 0xac6400b0  sw          $a0, 0xB0($v1)
    ctx->pc = 0x19a608u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 4));
    // 0x19a60c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x19A60Cu;
    {
        const bool branch_taken_0x19a60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a60c) {
            ctx->pc = 0x19A6ACu;
            goto label_19a6ac;
        }
    }
    ctx->pc = 0x19A614u;
label_19a614:
    // 0x19a614: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19a614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a618: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19a618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19a61c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19a61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a620: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19A620u;
    SET_GPR_U32(ctx, 31, 0x19A628u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19A620u, 0x19A628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A628u;
label_19a628:
    // 0x19a628: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19a628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a62c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a630: 0xac6400b0  sw          $a0, 0xB0($v1)
    ctx->pc = 0x19a630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 4));
    // 0x19a634: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19A634u;
    {
        const bool branch_taken_0x19a634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a634) {
            ctx->pc = 0x19A6ACu;
            goto label_19a6ac;
        }
    }
    ctx->pc = 0x19A63Cu;
label_19a63c:
    // 0x19a63c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a640: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19a640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19a644: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x19a644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19a648: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19A648u;
    SET_GPR_U32(ctx, 31, 0x19A650u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19A648u, 0x19A650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A650u;
label_19a650:
    // 0x19a650: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19a650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a654: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19a654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a658: 0xac6400b0  sw          $a0, 0xB0($v1)
    ctx->pc = 0x19a658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 4));
    // 0x19a65c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19A65Cu;
    {
        const bool branch_taken_0x19a65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a65c) {
            ctx->pc = 0x19A6ACu;
            goto label_19a6ac;
        }
    }
    ctx->pc = 0x19A664u;
label_19a664:
    // 0x19a664: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19a664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a668: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19a668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19a66c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19a66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19a670: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19A670u;
    SET_GPR_U32(ctx, 31, 0x19A678u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19A670u, 0x19A678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A678u;
label_19a678:
    // 0x19a678: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19a678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a67c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a680: 0xac6400b0  sw          $a0, 0xB0($v1)
    ctx->pc = 0x19a680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 4));
    // 0x19a684: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19A684u;
    {
        const bool branch_taken_0x19a684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a684) {
            ctx->pc = 0x19A6ACu;
            goto label_19a6ac;
        }
    }
    ctx->pc = 0x19A68Cu;
label_19a68c:
    // 0x19a68c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a690: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19a690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19a694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19a694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a698: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19A698u;
    SET_GPR_U32(ctx, 31, 0x19A6A0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19A698u, 0x19A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6A0u;
label_19a6a0:
    // 0x19a6a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19a6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a6a4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a6a8: 0xac6400b0  sw          $a0, 0xB0($v1)
    ctx->pc = 0x19a6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 4));
label_19a6ac:
    // 0x19a6ac: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a6b0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19a6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a6b4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a6b8: 0xc46000c0  lwc1        $f0, 0xC0($v1)
    ctx->pc = 0x19a6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a6bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19a6bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a6c0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x19A6C0u;
    {
        const bool branch_taken_0x19a6c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a6c0) {
            ctx->pc = 0x19A6F8u;
            goto label_19a6f8;
        }
    }
    ctx->pc = 0x19A6C8u;
    // 0x19a6c8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19a6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a6cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19a6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a6d0: 0xc067068  jal         func_19C1A0
    ctx->pc = 0x19A6D0u;
    SET_GPR_U32(ctx, 31, 0x19A6D8u);
    ctx->pc = 0x19C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1A0u, 0x19A6D0u, 0x19A6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6D8u;
label_19a6d8:
    // 0x19a6d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a6dc: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19a6e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19a6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a6e4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19A6E4u;
    SET_GPR_U32(ctx, 31, 0x19A6ECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19A6E4u, 0x19A6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6ECu;
label_19a6ec:
    // 0x19a6ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19a6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a6f0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19a6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a6f4: 0xac6400b0  sw          $a0, 0xB0($v1)
    ctx->pc = 0x19a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 4));
label_19a6f8:
    // 0x19a6f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19a6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a6fc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19a6fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19a700: 0x3e00008  jr          $ra
    ctx->pc = 0x19A700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A708u;
    // 0x19a708: 0x0  nop
    ctx->pc = 0x19a708u;
    // NOP
    // 0x19a70c: 0x0  nop
    ctx->pc = 0x19a70cu;
    // NOP
    ctx->pc = 0x19a710u;
}
