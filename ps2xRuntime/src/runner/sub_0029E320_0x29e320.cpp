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

// Function: sub_0029E320
// Address: 0x29e320 - 0x29e460
void sub_0029E320_0x29e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E320_0x29e320");
#endif

    switch (ctx->pc) {
        case 0x29e360u: goto label_29e360;
        case 0x29e38cu: goto label_29e38c;
        case 0x29e3a0u: goto label_29e3a0;
        case 0x29e404u: goto label_29e404;
        default: break;
    }

    ctx->pc = 0x29e320u;

    // 0x29e320: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x29e320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x29e324: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x29e324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x29e328: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29e328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x29e32c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29e32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29e330: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29e330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29e334: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29e334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29e338: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29e338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29e33c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29e33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29e340: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29e340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29e344: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x29e344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x29e348: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x29e348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x29e34c: 0x8fb400a0  lw          $s4, 0xA0($sp)
    ctx->pc = 0x29e34cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29e350: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29e350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e354: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29e354u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e358: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x29E358u;
    {
        const bool branch_taken_0x29e358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e358) {
            ctx->pc = 0x29E41Cu;
            goto label_29e41c;
        }
    }
    ctx->pc = 0x29E360u;
label_29e360:
    // 0x29e360: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29e360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e364: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29E364u;
    {
        const bool branch_taken_0x29e364 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x29e364) {
            ctx->pc = 0x29E37Cu;
            goto label_29e37c;
        }
    }
    ctx->pc = 0x29E36Cu;
    // 0x29e36c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x29e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29e370: 0x8c510018  lw          $s1, 0x18($v0)
    ctx->pc = 0x29e370u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x29e374: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29E374u;
    {
        const bool branch_taken_0x29e374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e374) {
            ctx->pc = 0x29E390u;
            goto label_29e390;
        }
    }
    ctx->pc = 0x29E37Cu;
label_29e37c:
    // 0x29e37c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x29e37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29e380: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29e380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e384: 0xc0c8812  jal         func_322048
    ctx->pc = 0x29E384u;
    SET_GPR_U32(ctx, 31, 0x29E38Cu);
    ctx->pc = 0x322048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322048u, 0x29E384u, 0x29E38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E38Cu;
label_29e38c:
    // 0x29e38c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29e38cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29e390:
    // 0x29e390: 0x8e360018  lw          $s6, 0x18($s1)
    ctx->pc = 0x29e390u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29e394: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29e394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e398: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x29E398u;
    {
        const bool branch_taken_0x29e398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e398) {
            ctx->pc = 0x29E40Cu;
            goto label_29e40c;
        }
    }
    ctx->pc = 0x29E3A0u;
label_29e3a0:
    // 0x29e3a0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x29e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x29e3a4: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x29e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x29e3a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29e3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29e3ac: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x29e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x29e3b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e3b4: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x29e3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x29e3b8: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x29e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x29e3bc: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x29e3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e3c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29e3c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e3c4: 0x0  nop
    ctx->pc = 0x29e3c4u;
    // NOP
    // 0x29e3c8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x29e3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x29e3cc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x29e3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x29e3d0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x29e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x29e3d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29e3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e3d8: 0x0  nop
    ctx->pc = 0x29e3d8u;
    // NOP
    // 0x29e3dc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x29e3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x29e3e0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x29e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x29e3e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29e3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e3e8: 0x0  nop
    ctx->pc = 0x29e3e8u;
    // NOP
    // 0x29e3ec: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x29e3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x29e3f0: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x29e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x29e3f4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x29e3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29e3f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29e3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e3fc: 0xc046270  jal         func_1189C0
    ctx->pc = 0x29E3FCu;
    SET_GPR_U32(ctx, 31, 0x29E404u);
    ctx->pc = 0x1189C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C0u, 0x29E3FCu, 0x29E404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E404u;
label_29e404:
    // 0x29e404: 0x27b5008c  addiu       $s5, $sp, 0x8C
    ctx->pc = 0x29e404u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x29e408: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29e408u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_29e40c:
    // 0x29e40c: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x29e40cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x29e410: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x29E410u;
    {
        const bool branch_taken_0x29e410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e410) {
            ctx->pc = 0x29E3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e3a0;
        }
    }
    ctx->pc = 0x29E418u;
    // 0x29e418: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29e418u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_29e41c:
    // 0x29e41c: 0x274102b  sltu        $v0, $s3, $s4
    ctx->pc = 0x29e41cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x29e420: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x29E420u;
    {
        const bool branch_taken_0x29e420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e420) {
            ctx->pc = 0x29E360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e360;
        }
    }
    ctx->pc = 0x29E428u;
    // 0x29e428: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x29e428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29e42c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x29e42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29e430: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29e430u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e434: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29e434u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e438: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29e438u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29e43c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29e43cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e440: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29e440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e444: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29e444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e44c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x29e44cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x29e450: 0x3e00008  jr          $ra
    ctx->pc = 0x29E450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E458u;
    // 0x29e458: 0x0  nop
    ctx->pc = 0x29e458u;
    // NOP
    // 0x29e45c: 0x0  nop
    ctx->pc = 0x29e45cu;
    // NOP
    ctx->pc = 0x29e460u;
}
