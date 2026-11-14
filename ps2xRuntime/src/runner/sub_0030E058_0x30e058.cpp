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

// Function: sub_0030E058
// Address: 0x30e058 - 0x30e2e8
void sub_0030E058_0x30e058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E058_0x30e058");
#endif

    switch (ctx->pc) {
        case 0x30e118u: goto label_30e118;
        default: break;
    }

    ctx->pc = 0x30e058u;

    // 0x30e058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30e058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30e05c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x30e05cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x30e060: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30e060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30e064: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30e064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30e068: 0x44116800  mfc1        $s1, $f13
    ctx->pc = 0x30e068u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x30e06c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x30e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x30e070: 0x3c02507f  lui         $v0, 0x507F
    ctx->pc = 0x30e070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20607 << 16));
    // 0x30e074: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30e074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30e078: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30e078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30e07c: 0x2238024  and         $s0, $s1, $v1
    ctx->pc = 0x30e07cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x30e080: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x30e080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x30e084: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30E084u;
    {
        const bool branch_taken_0x30e084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E084u;
        // 0x30e088: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e084) {
            ctx->pc = 0x30E0C0u;
            goto label_30e0c0;
        }
    }
    ctx->pc = 0x30E08Cu;
    // 0x30e08c: 0x1a200006  blez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30E08Cu;
    {
        const bool branch_taken_0x30e08c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x30E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E08Cu;
        // 0x30e090: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e08c) {
            ctx->pc = 0x30E0A8u;
            goto label_30e0a8;
        }
    }
    ctx->pc = 0x30E094u;
    // 0x30e094: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30e094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x30e098: 0xc441b52c  lwc1        $f1, -0x4AD4($v0)
    ctx->pc = 0x30e098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e09c: 0xc460b53c  lwc1        $f0, -0x4AC4($v1)
    ctx->pc = 0x30e09cu;
    { uint32_t bits = FAST_READ32(0x5FB53Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e0a0: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x30E0A0u;
    {
        const bool branch_taken_0x30e0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E0A0u;
        // 0x30e0a4: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e0a0) {
            ctx->pc = 0x30E2D0u;
            goto label_30e2d0;
        }
    }
    ctx->pc = 0x30E0A8u;
label_30e0a8:
    // 0x30e0a8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30e0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x30e0ac: 0xc440b52c  lwc1        $f0, -0x4AD4($v0)
    ctx->pc = 0x30e0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e0b0: 0xc461b53c  lwc1        $f1, -0x4AC4($v1)
    ctx->pc = 0x30e0b0u;
    { uint32_t bits = FAST_READ32(0x5FB53Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e0b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x30e0b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x30e0b8: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x30E0B8u;
    {
        const bool branch_taken_0x30e0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E0B8u;
        // 0x30e0bc: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e0b8) {
            ctx->pc = 0x30E2D0u;
            goto label_30e2d0;
        }
    }
    ctx->pc = 0x30E0C0u;
label_30e0c0:
    // 0x30e0c0: 0x3c023edf  lui         $v0, 0x3EDF
    ctx->pc = 0x30e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16095 << 16));
    // 0x30e0c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30e0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30e0c8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x30e0c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x30e0cc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30E0CCu;
    {
        const bool branch_taken_0x30e0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E0CCu;
        // 0x30e0d0: 0x3c0230ff  lui         $v0, 0x30FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12543 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e0cc) {
            ctx->pc = 0x30E110u;
            goto label_30e110;
        }
    }
    ctx->pc = 0x30E0D4u;
    // 0x30e0d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30e0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30e0d8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x30e0d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x30e0dc: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x30E0DCu;
    {
        const bool branch_taken_0x30e0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E0DCu;
        // 0x30e0e0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e0dc) {
            ctx->pc = 0x30E1F4u;
            goto label_30e1f4;
        }
    }
    ctx->pc = 0x30E0E4u;
    // 0x30e0e4: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x30e0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x30e0e8: 0x3421f2c9  ori         $at, $at, 0xF2C9
    ctx->pc = 0x30e0e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62153);
    // 0x30e0ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30e0ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30e0f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30e0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30e0f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30e0f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30e0f8: 0x46016840  add.s       $f1, $f13, $f1
    ctx->pc = 0x30e0f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x30e0fc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x30e0fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e100: 0x45010073  bc1t        . + 4 + (0x73 << 2)
    ctx->pc = 0x30E100u;
    {
        const bool branch_taken_0x30e100 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E100u;
        // 0x30e104: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e100) {
            ctx->pc = 0x30E2D0u;
            goto label_30e2d0;
        }
    }
    ctx->pc = 0x30E108u;
    // 0x30e108: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x30E108u;
    {
        const bool branch_taken_0x30e108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E108u;
        // 0x30e10c: 0x460d6b02  mul.s       $f12, $f13, $f13 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e108) {
            ctx->pc = 0x30E1F8u;
            goto label_30e1f8;
        }
    }
    ctx->pc = 0x30E110u;
label_30e110:
    // 0x30e110: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x30E110u;
    SET_GPR_U32(ctx, 31, 0x30E118u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x30E110u, 0x30E118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E118u;
label_30e118:
    // 0x30e118: 0x3c023f97  lui         $v0, 0x3F97
    ctx->pc = 0x30e118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16279 << 16));
    // 0x30e11c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30e11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30e120: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x30e120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x30e124: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30E124u;
    {
        const bool branch_taken_0x30e124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E124u;
        // 0x30e128: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e124) {
            ctx->pc = 0x30E198u;
            goto label_30e198;
        }
    }
    ctx->pc = 0x30E12Cu;
    // 0x30e12c: 0x3c023f2f  lui         $v0, 0x3F2F
    ctx->pc = 0x30e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16175 << 16));
    // 0x30e130: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30e130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30e134: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x30e134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x30e138: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30E138u;
    {
        const bool branch_taken_0x30e138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e138) {
            ctx->pc = 0x30E170u;
            goto label_30e170;
        }
    }
    ctx->pc = 0x30E140u;
    // 0x30e140: 0x460d6800  add.s       $f0, $f13, $f13
    ctx->pc = 0x30e140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x30e144: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30e144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30e148: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30e148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30e14c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x30e14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x30e150: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30e150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30e154: 0x46016840  add.s       $f1, $f13, $f1
    ctx->pc = 0x30e154u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x30e158: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x30e158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x30e15c: 0x0  nop
    ctx->pc = 0x30e15cu;
    // NOP
    // 0x30e160: 0x0  nop
    ctx->pc = 0x30e160u;
    // NOP
    // 0x30e164: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x30e164u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x30e168: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x30E168u;
    {
        const bool branch_taken_0x30e168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E168u;
        // 0x30e16c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e168) {
            ctx->pc = 0x30E1F4u;
            goto label_30e1f4;
        }
    }
    ctx->pc = 0x30E170u;
label_30e170:
    // 0x30e170: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30e170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30e174: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30e174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e178: 0x46006840  add.s       $f1, $f13, $f0
    ctx->pc = 0x30e178u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x30e17c: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x30e17cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x30e180: 0x0  nop
    ctx->pc = 0x30e180u;
    // NOP
    // 0x30e184: 0x0  nop
    ctx->pc = 0x30e184u;
    // NOP
    // 0x30e188: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x30e188u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x30e18c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x30E18Cu;
    {
        const bool branch_taken_0x30e18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E18Cu;
        // 0x30e190: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e18c) {
            ctx->pc = 0x30E1F4u;
            goto label_30e1f4;
        }
    }
    ctx->pc = 0x30E194u;
    // 0x30e194: 0x0  nop
    ctx->pc = 0x30e194u;
    // NOP
label_30e198:
    // 0x30e198: 0x3c02401b  lui         $v0, 0x401B
    ctx->pc = 0x30e198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16411 << 16));
    // 0x30e19c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30e19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30e1a0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x30e1a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x30e1a4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x30E1A4u;
    {
        const bool branch_taken_0x30e1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e1a4) {
            ctx->pc = 0x30E1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E1A4u;
            // 0x30e1a8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E1E0u;
            goto label_30e1e0;
        }
    }
    ctx->pc = 0x30E1ACu;
    // 0x30e1ac: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x30e1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x30e1b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30e1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e1b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30e1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30e1b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30e1b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30e1bc: 0x46006842  mul.s       $f1, $f13, $f0
    ctx->pc = 0x30e1bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x30e1c0: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x30e1c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x30e1c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30e1c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30e1c8: 0x0  nop
    ctx->pc = 0x30e1c8u;
    // NOP
    // 0x30e1cc: 0x0  nop
    ctx->pc = 0x30e1ccu;
    // NOP
    // 0x30e1d0: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x30e1d0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x30e1d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30E1D4u;
    {
        const bool branch_taken_0x30e1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E1D4u;
        // 0x30e1d8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e1d4) {
            ctx->pc = 0x30E1F4u;
            goto label_30e1f4;
        }
    }
    ctx->pc = 0x30E1DCu;
    // 0x30e1dc: 0x0  nop
    ctx->pc = 0x30e1dcu;
    // NOP
label_30e1e0:
    // 0x30e1e0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x30e1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x30e1e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30e1e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e1e8: 0x0  nop
    ctx->pc = 0x30e1e8u;
    // NOP
    // 0x30e1ec: 0x0  nop
    ctx->pc = 0x30e1ecu;
    // NOP
    // 0x30e1f0: 0x460d0343  div.s       $f13, $f0, $f13
    ctx->pc = 0x30e1f0u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[13]); }
label_30e1f4:
    // 0x30e1f4: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x30e1f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_30e1f8:
    // 0x30e1f8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30e1fc: 0x2442b540  addiu       $v0, $v0, -0x4AC0
    ctx->pc = 0x30e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948160));
    // 0x30e200: 0xc4470028  lwc1        $f7, 0x28($v0)
    ctx->pc = 0x30e200u;
    { uint32_t bits = FAST_READ32(0x5FB568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x30e204: 0xc4440020  lwc1        $f4, 0x20($v0)
    ctx->pc = 0x30e204u;
    { uint32_t bits = FAST_READ32(0x5FB560u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e208: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x30e208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x30e20c: 0xc4450024  lwc1        $f5, 0x24($v0)
    ctx->pc = 0x30e20cu;
    { uint32_t bits = FAST_READ32(0x5FB564u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30e210: 0xc4460018  lwc1        $f6, 0x18($v0)
    ctx->pc = 0x30e210u;
    { uint32_t bits = FAST_READ32(0x5FB558u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30e214: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x30e214u;
    { uint32_t bits = FAST_READ32(0x5FB55Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e218: 0xc4480010  lwc1        $f8, 0x10($v0)
    ctx->pc = 0x30e218u;
    { uint32_t bits = FAST_READ32(0x5FB550u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x30e21c: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x30e21cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x30e220: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x30e220u;
    { uint32_t bits = FAST_READ32(0x5FB554u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e224: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x30e224u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x30e228: 0xc4490008  lwc1        $f9, 0x8($v0)
    ctx->pc = 0x30e228u;
    { uint32_t bits = FAST_READ32(0x5FB548u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x30e22c: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x30e22cu;
    { uint32_t bits = FAST_READ32(0x5FB54Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e230: 0xc44a0004  lwc1        $f10, 0x4($v0)
    ctx->pc = 0x30e230u;
    { uint32_t bits = FAST_READ32(0x5FB544u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x30e234: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x30e234u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x30e238: 0xc44b0000  lwc1        $f11, 0x0($v0)
    ctx->pc = 0x30e238u;
    { uint32_t bits = FAST_READ32(0x5FB540u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x30e23c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x30e23cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x30e240: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x30e240u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x30e244: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x30e244u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30e248: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x30e248u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x30e24c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x30e24cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30e250: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x30e250u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x30e254: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x30e254u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x30e258: 0x46064200  add.s       $f8, $f8, $f6
    ctx->pc = 0x30e258u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[6]);
    // 0x30e25c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x30e25cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x30e260: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x30e260u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x30e264: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x30e264u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x30e268: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x30e268u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x30e26c: 0x46035280  add.s       $f10, $f10, $f3
    ctx->pc = 0x30e26cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[3]);
    // 0x30e270: 0x46090242  mul.s       $f9, $f0, $f9
    ctx->pc = 0x30e270u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x30e274: 0x460a0042  mul.s       $f1, $f0, $f10
    ctx->pc = 0x30e274u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x30e278: 0x46095ac0  add.s       $f11, $f11, $f9
    ctx->pc = 0x30e278u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[9]);
    // 0x30e27c: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30E27Cu;
    {
        const bool branch_taken_0x30e27c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x30E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E27Cu;
        // 0x30e280: 0x460b6002  mul.s       $f0, $f12, $f11 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e27c) {
            ctx->pc = 0x30E298u;
            goto label_30e298;
        }
    }
    ctx->pc = 0x30E284u;
    // 0x30e284: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30e284u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30e288: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x30e288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x30e28c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x30E28Cu;
    {
        const bool branch_taken_0x30e28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E28Cu;
        // 0x30e290: 0x46006801  sub.s       $f0, $f13, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e28c) {
            ctx->pc = 0x30E2D0u;
            goto label_30e2d0;
        }
    }
    ctx->pc = 0x30E294u;
    // 0x30e294: 0x0  nop
    ctx->pc = 0x30e294u;
    // NOP
label_30e298:
    // 0x30e298: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30e298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30e29c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30e2a0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30e2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x30e2a4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x30e2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x30e2a8: 0xc421b530  lwc1        $f1, -0x4AD0($at)
    ctx->pc = 0x30e2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e2ac: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30e2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x30e2b0: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x30e2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x30e2b4: 0xc422b520  lwc1        $f2, -0x4AE0($at)
    ctx->pc = 0x30e2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e2b8: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x30e2b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x30e2bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x30e2bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x30e2c0: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x30e2c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x30e2c4: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30E2C4u;
    {
        const bool branch_taken_0x30e2c4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x30E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E2C4u;
        // 0x30e2c8: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e2c4) {
            ctx->pc = 0x30E2D0u;
            goto label_30e2d0;
        }
    }
    ctx->pc = 0x30E2CCu;
    // 0x30e2cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x30e2ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_30e2d0:
    // 0x30e2d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30e2d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e2d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30e2d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30e2d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30e2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x30E2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E2DCu;
        // 0x30e2e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E2E4u;
    // 0x30e2e4: 0x0  nop
    ctx->pc = 0x30e2e4u;
    // NOP
    ctx->pc = 0x30e2e8u;
}
