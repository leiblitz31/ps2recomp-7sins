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

// Function: sub_002CEFE0
// Address: 0x2cefe0 - 0x2cf190
void sub_002CEFE0_0x2cefe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEFE0_0x2cefe0");
#endif

    switch (ctx->pc) {
        case 0x2cf010u: goto label_2cf010;
        case 0x2cf024u: goto label_2cf024;
        case 0x2cf040u: goto label_2cf040;
        case 0x2cf050u: goto label_2cf050;
        case 0x2cf07cu: goto label_2cf07c;
        case 0x2cf0b8u: goto label_2cf0b8;
        case 0x2cf0c8u: goto label_2cf0c8;
        case 0x2cf0f8u: goto label_2cf0f8;
        case 0x2cf110u: goto label_2cf110;
        case 0x2cf134u: goto label_2cf134;
        case 0x2cf154u: goto label_2cf154;
        default: break;
    }

    ctx->pc = 0x2cefe0u;

    // 0x2cefe0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2cefe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2cefe4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2cefe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2cefe8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2cefe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2cefec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2cefecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2ceff0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ceff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ceff4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ceff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ceff8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ceff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ceffc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ceffcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2cf000: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x2cf000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x2cf004: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2cf004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf008: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2CF008u;
    {
        const bool branch_taken_0x2cf008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf008) {
            ctx->pc = 0x2CF144u;
            goto label_2cf144;
        }
    }
    ctx->pc = 0x2CF010u;
label_2cf010:
    // 0x2cf010: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2cf010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cf014: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2cf014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2cf018: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2cf018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf01c: 0xc09d660  jal         func_275980
    ctx->pc = 0x2CF01Cu;
    SET_GPR_U32(ctx, 31, 0x2CF024u);
    ctx->pc = 0x275980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275980u, 0x2CF01Cu, 0x2CF024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF024u;
label_2cf024:
    // 0x2cf024: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2cf024u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf028: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cf028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cf02c: 0x0  nop
    ctx->pc = 0x2cf02cu;
    // NOP
    // 0x2cf030: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2cf030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2cf034: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cf034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf038: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CF038u;
    {
        const bool branch_taken_0x2cf038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf038) {
            ctx->pc = 0x2CF06Cu;
            goto label_2cf06c;
        }
    }
    ctx->pc = 0x2CF040u;
label_2cf040:
    // 0x2cf040: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x2cf040u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2cf044: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2cf044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2cf048: 0xc0b2ed0  jal         func_2CBB40
    ctx->pc = 0x2CF048u;
    SET_GPR_U32(ctx, 31, 0x2CF050u);
    ctx->pc = 0x2CBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBB40u, 0x2CF048u, 0x2CF050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF050u;
label_2cf050:
    // 0x2cf050: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cf050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf054: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2cf054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf058: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2cf058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf05c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cf05cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cf060: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2cf060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2cf064: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x2cf064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2cf068: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2cf068u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2cf06c:
    // 0x2cf06c: 0x325400ff  andi        $s4, $s2, 0xFF
    ctx->pc = 0x2cf06cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2cf070: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2cf070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2cf074: 0xc0b2e9c  jal         func_2CBA70
    ctx->pc = 0x2CF074u;
    SET_GPR_U32(ctx, 31, 0x2CF07Cu);
    ctx->pc = 0x2CBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA70u, 0x2CF074u, 0x2CF07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF07Cu;
label_2cf07c:
    // 0x2cf07c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2cf07cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cf080: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2CF080u;
    {
        const bool branch_taken_0x2cf080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf080) {
            ctx->pc = 0x2CF040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf040;
        }
    }
    ctx->pc = 0x2CF088u;
    // 0x2cf088: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cf088u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cf08c: 0x0  nop
    ctx->pc = 0x2cf08cu;
    // NOP
    // 0x2cf090: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2cf090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2cf094: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2cf094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2cf098: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cf098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cf09c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2cf09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf0a0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2cf0a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2cf0a4: 0x0  nop
    ctx->pc = 0x2cf0a4u;
    // NOP
    // 0x2cf0a8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2cf0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2cf0ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cf0acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf0b0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2CF0B0u;
    {
        const bool branch_taken_0x2cf0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf0b0) {
            ctx->pc = 0x2CF124u;
            goto label_2cf124;
        }
    }
    ctx->pc = 0x2CF0B8u;
label_2cf0b8:
    // 0x2cf0b8: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x2cf0b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2cf0bc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2cf0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2cf0c0: 0xc0b2ed0  jal         func_2CBB40
    ctx->pc = 0x2CF0C0u;
    SET_GPR_U32(ctx, 31, 0x2CF0C8u);
    ctx->pc = 0x2CBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBB40u, 0x2CF0C0u, 0x2CF0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF0C8u;
label_2cf0c8:
    // 0x2cf0c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cf0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf0cc: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x2cf0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf0d0: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x2cf0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf0d4: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2cf0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf0d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cf0d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cf0dc: 0x0  nop
    ctx->pc = 0x2cf0dcu;
    // NOP
    // 0x2cf0e0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2cf0e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2cf0e4: 0x4603151c  madd.s      $f20, $f2, $f3
    ctx->pc = 0x2cf0e4u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2cf0e8: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x2cf0e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2cf0ec: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2cf0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2cf0f0: 0xc0b2ed0  jal         func_2CBB40
    ctx->pc = 0x2CF0F0u;
    SET_GPR_U32(ctx, 31, 0x2CF0F8u);
    ctx->pc = 0x2CBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBB40u, 0x2CF0F0u, 0x2CF0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF0F8u;
label_2cf0f8:
    // 0x2cf0f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cf0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf0fc: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2cf0fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cf100: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x2cf100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2cf104: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2cf104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2cf108: 0xc0b2ed0  jal         func_2CBB40
    ctx->pc = 0x2CF108u;
    SET_GPR_U32(ctx, 31, 0x2CF110u);
    ctx->pc = 0x2CBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBB40u, 0x2CF108u, 0x2CF110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF110u;
label_2cf110:
    // 0x2cf110: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cf110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf114: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2cf114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf118: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2cf118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2cf11c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2cf11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2cf120: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2cf120u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2cf124:
    // 0x2cf124: 0x323400ff  andi        $s4, $s1, 0xFF
    ctx->pc = 0x2cf124u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2cf128: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2cf128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2cf12c: 0xc0b2e9c  jal         func_2CBA70
    ctx->pc = 0x2CF12Cu;
    SET_GPR_U32(ctx, 31, 0x2CF134u);
    ctx->pc = 0x2CBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA70u, 0x2CF12Cu, 0x2CF134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF134u;
label_2cf134:
    // 0x2cf134: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2cf134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cf138: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2CF138u;
    {
        const bool branch_taken_0x2cf138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf138) {
            ctx->pc = 0x2CF0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf0b8;
        }
    }
    ctx->pc = 0x2CF140u;
    // 0x2cf140: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2cf140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2cf144:
    // 0x2cf144: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2cf144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cf148: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2cf148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2cf14c: 0xc09d650  jal         func_275940
    ctx->pc = 0x2CF14Cu;
    SET_GPR_U32(ctx, 31, 0x2CF154u);
    ctx->pc = 0x275940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275940u, 0x2CF14Cu, 0x2CF154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF154u;
label_2cf154:
    // 0x2cf154: 0x262182b  sltu        $v1, $s3, $v0
    ctx->pc = 0x2cf154u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cf158: 0x1460ffad  bnez        $v1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x2CF158u;
    {
        const bool branch_taken_0x2cf158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf158) {
            ctx->pc = 0x2CF010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf010;
        }
    }
    ctx->pc = 0x2CF160u;
    // 0x2cf160: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2cf160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cf164: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2cf164u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cf168: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2cf168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cf16c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2cf16cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cf170: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cf170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf174: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cf174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf178: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2cf178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cf17c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2cf17cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2cf180: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF188u;
    // 0x2cf188: 0x0  nop
    ctx->pc = 0x2cf188u;
    // NOP
    // 0x2cf18c: 0x0  nop
    ctx->pc = 0x2cf18cu;
    // NOP
    ctx->pc = 0x2cf190u;
}
