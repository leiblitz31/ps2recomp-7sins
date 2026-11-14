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

// Function: sub_00435108
// Address: 0x435108 - 0x435220
void sub_00435108_0x435108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435108_0x435108");
#endif

    ctx->pc = 0x435108u;

    // 0x435108: 0x8f82bee0  lw          $v0, -0x4120($gp)
    ctx->pc = 0x435108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950624)));
    // 0x43510c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x43510Cu;
    {
        const bool branch_taken_0x43510c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43510c) {
            ctx->pc = 0x435140u;
            goto label_435140;
        }
    }
    ctx->pc = 0x435114u;
    // 0x435114: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x435114u;
    {
        const bool branch_taken_0x435114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x435114) {
            ctx->pc = 0x435118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435114u;
            // 0x435118: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435128u;
            goto label_435128;
        }
    }
    ctx->pc = 0x43511Cu;
    // 0x43511c: 0xc7808094  lwc1        $f0, -0x7F6C($gp)
    ctx->pc = 0x43511cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x435120: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x435120u;
    {
        const bool branch_taken_0x435120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435120u;
        // 0x435124: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435120) {
            ctx->pc = 0x43512Cu;
            goto label_43512c;
        }
    }
    ctx->pc = 0x435128u;
label_435128:
    // 0x435128: 0xc7808098  lwc1        $f0, -0x7F68($gp)
    ctx->pc = 0x435128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43512c:
    // 0x43512c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x43512cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x435130: 0xaf82aeac  sw          $v0, -0x5154($gp)
    ctx->pc = 0x435130u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946476), GPR_U32(ctx, 2));
    // 0x435134: 0xe460e898  swc1        $f0, -0x1768($v1)
    ctx->pc = 0x435134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E898u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E898u, _value); } while (0); }
    // 0x435138: 0x3e00008  jr          $ra
    ctx->pc = 0x435138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435138u;
        // 0x43513c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435140u;
label_435140:
    // 0x435140: 0x3e00008  jr          $ra
    ctx->pc = 0x435140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435140u;
        // 0x435144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435148u;
    // 0x435148: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x435148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x43514c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x43514cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x435150: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x435150u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x435154: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x435154u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x435158: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x435158u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x43515c: 0x2882f800  slti        $v0, $a0, -0x800
    ctx->pc = 0x43515cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294965248) ? 1 : 0);
    // 0x435160: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x435160u;
    {
        const bool branch_taken_0x435160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x435164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435160u;
        // 0x435164: 0x28830800  slti        $v1, $a0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2048) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x435160) {
            ctx->pc = 0x435170u;
            goto label_435170;
        }
    }
    ctx->pc = 0x435168u;
    // 0x435168: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x435168u;
    {
        const bool branch_taken_0x435168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435168u;
        // 0x43516c: 0x2404f800  addiu       $a0, $zero, -0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435168) {
            ctx->pc = 0x435178u;
            goto label_435178;
        }
    }
    ctx->pc = 0x435170u;
label_435170:
    // 0x435170: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x435170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x435174: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x435174u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_435178:
    // 0x435178: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x435178u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x43517c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x43517cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x435180: 0x8f83aea8  lw          $v1, -0x5158($gp)
    ctx->pc = 0x435180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946472)));
    // 0x435184: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x435184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x435188: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x435188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x43518c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x43518cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x435190: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x435190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x435194: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x435194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x435198: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x435198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x43519c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x43519cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4351a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4351a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4351a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4351A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4351A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4351A4u;
        // 0x4351a8: 0xaf83aea8  sw          $v1, -0x5158($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4351A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4351ACu;
    // 0x4351ac: 0x0  nop
    ctx->pc = 0x4351acu;
    // NOP
    // 0x4351b0: 0x8f85aea8  lw          $a1, -0x5158($gp)
    ctx->pc = 0x4351b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946472)));
    // 0x4351b4: 0x2c860004  sltiu       $a2, $a0, 0x4
    ctx->pc = 0x4351b4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4351b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4351b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4351bc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4351bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4351c0: 0x86100b  movn        $v0, $a0, $a2
    ctx->pc = 0x4351c0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4351c4: 0x3463cfff  ori         $v1, $v1, 0xCFFF
    ctx->pc = 0x4351c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53247);
    // 0x4351c8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4351c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4351cc: 0x22300  sll         $a0, $v0, 12
    ctx->pc = 0x4351ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x4351d0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4351d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4351d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4351D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4351D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4351D4u;
        // 0x4351d8: 0xaf85aea8  sw          $a1, -0x5158($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946472), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4351D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4351DCu;
    // 0x4351dc: 0x0  nop
    ctx->pc = 0x4351dcu;
    // NOP
    // 0x4351e0: 0x8f82aea8  lw          $v0, -0x5158($gp)
    ctx->pc = 0x4351e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946472)));
    // 0x4351e4: 0x30430800  andi        $v1, $v0, 0x800
    ctx->pc = 0x4351e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x4351e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4351E8u;
    {
        const bool branch_taken_0x4351e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4351ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4351E8u;
        // 0x4351ec: 0x30440fff  andi        $a0, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4351e8) {
            ctx->pc = 0x4351F8u;
            goto label_4351f8;
        }
    }
    ctx->pc = 0x4351F0u;
    // 0x4351f0: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x4351f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x4351f4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4351f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4351f8:
    // 0x4351f8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4351f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4351fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4351fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x435200: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x435200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x435204: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x435204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x435208: 0x3e00008  jr          $ra
    ctx->pc = 0x435208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435208u;
        // 0x43520c: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435210u;
    // 0x435210: 0x8f82aea8  lw          $v0, -0x5158($gp)
    ctx->pc = 0x435210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946472)));
    // 0x435214: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x435214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
    // 0x435218: 0x3e00008  jr          $ra
    ctx->pc = 0x435218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435218u;
        // 0x43521c: 0x21302  srl         $v0, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435220u;
}
