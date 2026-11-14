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

// Function: sub_004B2070
// Address: 0x4b2070 - 0x4b2420
void sub_004B2070_0x4b2070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B2070_0x4b2070");
#endif

    switch (ctx->pc) {
        case 0x4b2178u: goto label_4b2178;
        case 0x4b2278u: goto label_4b2278;
        case 0x4b22c4u: goto label_4b22c4;
        case 0x4b22fcu: goto label_4b22fc;
        case 0x4b2308u: goto label_4b2308;
        case 0x4b2310u: goto label_4b2310;
        case 0x4b2334u: goto label_4b2334;
        case 0x4b23b0u: goto label_4b23b0;
        default: break;
    }

    ctx->pc = 0x4b2070u;

    // 0x4b2070: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x4b2070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4b2074: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b2074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b2078: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4b2078u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4b207c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4b207cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4b2080: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b2080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2084: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2084u;
        // 0x4b2088: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B208Cu;
    // 0x4b208c: 0x0  nop
    ctx->pc = 0x4b208cu;
    // NOP
    // 0x4b2090: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b2090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2094: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x4b2094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x4b2098: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4b2098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b209c: 0xaca40658  sw          $a0, 0x658($a1)
    ctx->pc = 0x4b209cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1624), GPR_U32(ctx, 4));
    // 0x4b20a0: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x4b20a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4b20a4: 0xa4a3065c  sh          $v1, 0x65C($a1)
    ctx->pc = 0x4b20a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1628), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b20a8: 0x94c40006  lhu         $a0, 0x6($a2)
    ctx->pc = 0x4b20a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x4b20ac: 0xa4a4065e  sh          $a0, 0x65E($a1)
    ctx->pc = 0x4b20acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1630), (uint16_t)GPR_U32(ctx, 4));
    // 0x4b20b0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x4b20b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4b20b4: 0xaca30668  sw          $v1, 0x668($a1)
    ctx->pc = 0x4b20b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1640), GPR_U32(ctx, 3));
    // 0x4b20b8: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x4b20b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4b20bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B20BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B20C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B20BCu;
        // 0x4b20c0: 0xaca4066c  sw          $a0, 0x66C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1644), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B20BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B20C4u;
    // 0x4b20c4: 0x0  nop
    ctx->pc = 0x4b20c4u;
    // NOP
    // 0x4b20c8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b20c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b20cc: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x4b20ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x4b20d0: 0x8ca40658  lw          $a0, 0x658($a1)
    ctx->pc = 0x4b20d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1624)));
    // 0x4b20d4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4b20d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4b20d8: 0x94a3065c  lhu         $v1, 0x65C($a1)
    ctx->pc = 0x4b20d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1628)));
    // 0x4b20dc: 0xa4c30004  sh          $v1, 0x4($a2)
    ctx->pc = 0x4b20dcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b20e0: 0x94a4065e  lhu         $a0, 0x65E($a1)
    ctx->pc = 0x4b20e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1630)));
    // 0x4b20e4: 0xa4c40006  sh          $a0, 0x6($a2)
    ctx->pc = 0x4b20e4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x4b20e8: 0x8ca30668  lw          $v1, 0x668($a1)
    ctx->pc = 0x4b20e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1640)));
    // 0x4b20ec: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x4b20ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x4b20f0: 0x8ca4066c  lw          $a0, 0x66C($a1)
    ctx->pc = 0x4b20f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1644)));
    // 0x4b20f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B20F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B20F4u;
        // 0x4b20f8: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B20F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B20FCu;
    // 0x4b20fc: 0x0  nop
    ctx->pc = 0x4b20fcu;
    // NOP
    // 0x4b2100: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4b2100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2104: 0xc78181a4  lwc1        $f1, -0x7E5C($gp)
    ctx->pc = 0x4b2104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b2108: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4b2108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4b210c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b210cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4b2110: 0xe48106a0  swc1        $f1, 0x6A0($a0)
    ctx->pc = 0x4b2110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1696), bits); }
    // 0x4b2114: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2114u;
        // 0x4b2118: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B211Cu;
    // 0x4b211c: 0x0  nop
    ctx->pc = 0x4b211cu;
    // NOP
    // 0x4b2120: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b2120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2124: 0xc44006a0  lwc1        $f0, 0x6A0($v0)
    ctx->pc = 0x4b2124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2128: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4b2128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4b212c: 0xc78181a4  lwc1        $f1, -0x7E5C($gp)
    ctx->pc = 0x4b212cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b2130: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4b2130u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x4b2134: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2134u;
        // 0x4b2138: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B213Cu;
    // 0x4b213c: 0x0  nop
    ctx->pc = 0x4b213cu;
    // NOP
    // 0x4b2140: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b2140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2144: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2144u;
        // 0x4b2148: 0xac461418  sw          $a2, 0x1418($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 5144), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B214Cu;
    // 0x4b214c: 0x0  nop
    ctx->pc = 0x4b214cu;
    // NOP
    // 0x4b2150: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b2150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2154: 0x8c431418  lw          $v1, 0x1418($v0)
    ctx->pc = 0x4b2154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5144)));
    // 0x4b2158: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2158u;
        // 0x4b215c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B2160u;
    // 0x4b2160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b2160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b2164: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b2164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b2168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b2168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b216c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b216cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2170: 0xc12c38a  jal         func_4B0E28
    ctx->pc = 0x4B2170u;
    SET_GPR_U32(ctx, 31, 0x4B2178u);
    ctx->pc = 0x4B2174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2170u;
    // 0x4b2174: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0E28u, 0x4B2170u, 0x4B2178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2178u;
label_4b2178:
    // 0x4b2178: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b2178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b217c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b217cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2180: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b2180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b2184: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2184u;
        // 0x4b2188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B218Cu;
    // 0x4b218c: 0x0  nop
    ctx->pc = 0x4b218cu;
    // NOP
    // 0x4b2190: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b2190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2194: 0x684313ef  ldl         $v1, 0x13EF($v0)
    ctx->pc = 0x4b2194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4b2198: 0x6c4313e8  ldr         $v1, 0x13E8($v0)
    ctx->pc = 0x4b2198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5096); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4b219c: 0x684413f7  ldl         $a0, 0x13F7($v0)
    ctx->pc = 0x4b219cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4b21a0: 0x6c4413f0  ldr         $a0, 0x13F0($v0)
    ctx->pc = 0x4b21a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4b21a4: 0x684513ff  ldl         $a1, 0x13FF($v0)
    ctx->pc = 0x4b21a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4b21a8: 0x6c4513f8  ldr         $a1, 0x13F8($v0)
    ctx->pc = 0x4b21a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4b21ac: 0x68471407  ldl         $a3, 0x1407($v0)
    ctx->pc = 0x4b21acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4b21b0: 0x6c471400  ldr         $a3, 0x1400($v0)
    ctx->pc = 0x4b21b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4b21b4: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x4b21b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b21b8: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x4b21b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b21bc: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x4b21bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b21c0: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x4b21c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b21c4: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x4b21c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b21c8: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x4b21c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b21cc: 0xb0c7001f  sdl         $a3, 0x1F($a2)
    ctx->pc = 0x4b21ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b21d0: 0xb4c70018  sdr         $a3, 0x18($a2)
    ctx->pc = 0x4b21d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b21d4: 0x6843140f  ldl         $v1, 0x140F($v0)
    ctx->pc = 0x4b21d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4b21d8: 0x6c431408  ldr         $v1, 0x1408($v0)
    ctx->pc = 0x4b21d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4b21dc: 0x68441417  ldl         $a0, 0x1417($v0)
    ctx->pc = 0x4b21dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4b21e0: 0x6c441410  ldr         $a0, 0x1410($v0)
    ctx->pc = 0x4b21e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4b21e4: 0xb0c30027  sdl         $v1, 0x27($a2)
    ctx->pc = 0x4b21e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b21e8: 0xb4c30020  sdr         $v1, 0x20($a2)
    ctx->pc = 0x4b21e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b21ec: 0xb0c4002f  sdl         $a0, 0x2F($a2)
    ctx->pc = 0x4b21ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b21f0: 0xb4c40028  sdr         $a0, 0x28($a2)
    ctx->pc = 0x4b21f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b21f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B21F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B21F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B21FCu;
    // 0x4b21fc: 0x0  nop
    ctx->pc = 0x4b21fcu;
    // NOP
    // 0x4b2200: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b2200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2204: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4b2204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b2208: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2208u;
        // 0x4b220c: 0xac4306a4  sw          $v1, 0x6A4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1700), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B2210u;
    // 0x4b2210: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b2210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2214: 0x8c4306a4  lw          $v1, 0x6A4($v0)
    ctx->pc = 0x4b2214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1700)));
    // 0x4b2218: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2218u;
        // 0x4b221c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B2220u;
    // 0x4b2220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b2220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4b2224: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4b2224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4b2228: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4b2228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4b222c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4b222cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4b2230: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4b2230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b2234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b2238: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x4b2238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x4b223c: 0x8e021394  lw          $v0, 0x1394($s0)
    ctx->pc = 0x4b223cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5012)));
    // 0x4b2240: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x4B2240u;
    {
        const bool branch_taken_0x4b2240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2240u;
        // 0x4b2244: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2240) {
            ctx->pc = 0x4B2340u;
            goto label_4b2340;
        }
    }
    ctx->pc = 0x4B2248u;
    // 0x4b2248: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4b2248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b224c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4B224Cu;
    {
        const bool branch_taken_0x4b224c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B224Cu;
        // 0x4b2250: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b224c) {
            ctx->pc = 0x4B22D8u;
            goto label_4b22d8;
        }
    }
    ctx->pc = 0x4B2254u;
    // 0x4b2254: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4b2254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4b2258: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b2258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b225c: 0x34c6080c  ori         $a2, $a2, 0x80C
    ctx->pc = 0x4b225cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2060);
    // 0x4b2260: 0xae031388  sw          $v1, 0x1388($s0)
    ctx->pc = 0x4b2260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5000), GPR_U32(ctx, 3));
    // 0x4b2264: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4b2264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4b2268: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4b2268u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4b226c: 0xae02138c  sw          $v0, 0x138C($s0)
    ctx->pc = 0x4b226cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5004), GPR_U32(ctx, 2));
    // 0x4b2270: 0xc127cc2  jal         func_49F308
    ctx->pc = 0x4B2270u;
    SET_GPR_U32(ctx, 31, 0x4B2278u);
    ctx->pc = 0x4B2274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2270u;
    // 0x4b2274: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F308u, 0x4B2270u, 0x4B2278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2278u;
label_4b2278:
    // 0x4b2278: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4b2278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4b227c: 0x2444003f  addiu       $a0, $v0, 0x3F
    ctx->pc = 0x4b227cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x4b2280: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x4b2280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x4b2284: 0xae021394  sw          $v0, 0x1394($s0)
    ctx->pc = 0x4b2284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5012), GPR_U32(ctx, 2));
    // 0x4b2288: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4b2288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b228c: 0xae041390  sw          $a0, 0x1390($s0)
    ctx->pc = 0x4b228cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5008), GPR_U32(ctx, 4));
    // 0x4b2290: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4b2290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b2294: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x4B2294u;
    {
        const bool branch_taken_0x4b2294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2294u;
        // 0x4b2298: 0xae031384  sw          $v1, 0x1384($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4996), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2294) {
            ctx->pc = 0x4B2340u;
            goto label_4b2340;
        }
    }
    ctx->pc = 0x4B229Cu;
    // 0x4b229c: 0x8e0a138c  lw          $t2, 0x138C($s0)
    ctx->pc = 0x4b229cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5004)));
    // 0x4b22a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b22a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b22a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b22a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b22a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b22a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b22ac: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x4b22acu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x4b22b0: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x4b22b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x4b22b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b22b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b22b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4b22b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b22bc: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4B22BCu;
    SET_GPR_U32(ctx, 31, 0x4B22C4u);
    ctx->pc = 0x4B22C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B22BCu;
    // 0x4b22c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B22BCu, 0x4B22C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B22C4u;
label_4b22c4:
    // 0x4b22c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b22c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b22c8: 0xaf82b8f8  sw          $v0, -0x4708($gp)
    ctx->pc = 0x4b22c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949112), GPR_U32(ctx, 2));
    // 0x4b22cc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4B22CCu;
    {
        const bool branch_taken_0x4b22cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B22D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B22CCu;
        // 0x4b22d0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b22cc) {
            ctx->pc = 0x4B2344u;
            goto label_4b2344;
        }
    }
    ctx->pc = 0x4B22D4u;
    // 0x4b22d4: 0x0  nop
    ctx->pc = 0x4b22d4u;
    // NOP
label_4b22d8:
    // 0x4b22d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b22d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b22dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b22dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b22e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b22e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b22e4: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x4b22e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x4b22e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b22e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b22ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4b22ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b22f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4b22f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b22f4: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4B22F4u;
    SET_GPR_U32(ctx, 31, 0x4B22FCu);
    ctx->pc = 0x4B22F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B22F4u;
    // 0x4b22f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B22F4u, 0x4B22FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B22FCu;
label_4b22fc:
    // 0x4b22fc: 0x8f82b8f8  lw          $v0, -0x4708($gp)
    ctx->pc = 0x4b22fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949112)));
    // 0x4b2300: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B2300u;
    {
        const bool branch_taken_0x4b2300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2300) {
            ctx->pc = 0x4B2304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2300u;
            // 0x4b2304: 0x8e041394  lw          $a0, 0x1394($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5012)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2320u;
            goto label_4b2320;
        }
    }
    ctx->pc = 0x4B2308u;
label_4b2308:
    // 0x4b2308: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x4B2308u;
    SET_GPR_U32(ctx, 31, 0x4B2310u);
    ctx->pc = 0x4B230Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2308u;
    // 0x4b230c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x4B2308u, 0x4B2310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2310u;
label_4b2310:
    // 0x4b2310: 0x8f82b8f8  lw          $v0, -0x4708($gp)
    ctx->pc = 0x4b2310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949112)));
    // 0x4b2314: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x4B2314u;
    {
        const bool branch_taken_0x4b2314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b2314) {
            ctx->pc = 0x4B2308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b2308;
        }
    }
    ctx->pc = 0x4B231Cu;
    // 0x4b231c: 0x8e041394  lw          $a0, 0x1394($s0)
    ctx->pc = 0x4b231cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5012)));
label_4b2320:
    // 0x4b2320: 0xae001388  sw          $zero, 0x1388($s0)
    ctx->pc = 0x4b2320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5000), GPR_U32(ctx, 0));
    // 0x4b2324: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B2324u;
    {
        const bool branch_taken_0x4b2324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2324u;
        // 0x4b2328: 0xae00138c  sw          $zero, 0x138C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5004), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2324) {
            ctx->pc = 0x4B2334u;
            goto label_4b2334;
        }
    }
    ctx->pc = 0x4B232Cu;
    // 0x4b232c: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4B232Cu;
    SET_GPR_U32(ctx, 31, 0x4B2334u);
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4B232Cu, 0x4B2334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2334u;
label_4b2334:
    // 0x4b2334: 0xae001384  sw          $zero, 0x1384($s0)
    ctx->pc = 0x4b2334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4996), GPR_U32(ctx, 0));
    // 0x4b2338: 0xae001394  sw          $zero, 0x1394($s0)
    ctx->pc = 0x4b2338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5012), GPR_U32(ctx, 0));
    // 0x4b233c: 0xae001390  sw          $zero, 0x1390($s0)
    ctx->pc = 0x4b233cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5008), GPR_U32(ctx, 0));
label_4b2340:
    // 0x4b2340: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4b2340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b2344:
    // 0x4b2344: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4b2344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b2348: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4b2348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b234c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4b234cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b2350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b2350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2354: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2354u;
        // 0x4b2358: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B235Cu;
    // 0x4b235c: 0x0  nop
    ctx->pc = 0x4b235cu;
    // NOP
    // 0x4b2360: 0x50c00007  beql        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B2360u;
    {
        const bool branch_taken_0x4b2360 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2360) {
            ctx->pc = 0x4B2364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2360u;
            // 0x4b2364: 0xaf80b8fc  sw          $zero, -0x4704($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294949116), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2380u;
            goto label_4b2380;
        }
    }
    ctx->pc = 0x4B2368u;
    // 0x4b2368: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4b2368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b236c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x4b236cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4b2370: 0xaf82b900  sw          $v0, -0x4700($gp)
    ctx->pc = 0x4b2370u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949120), GPR_U32(ctx, 2));
    // 0x4b2374: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B2374u;
    {
        const bool branch_taken_0x4b2374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2374u;
        // 0x4b2378: 0xaf83b8fc  sw          $v1, -0x4704($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2374) {
            ctx->pc = 0x4B2384u;
            goto label_4b2384;
        }
    }
    ctx->pc = 0x4B237Cu;
    // 0x4b237c: 0x0  nop
    ctx->pc = 0x4b237cu;
    // NOP
label_4b2380:
    // 0x4b2380: 0xaf80b900  sw          $zero, -0x4700($gp)
    ctx->pc = 0x4b2380u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949120), GPR_U32(ctx, 0));
label_4b2384:
    // 0x4b2384: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2384u;
        // 0x4b2388: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B238Cu;
    // 0x4b238c: 0x0  nop
    ctx->pc = 0x4b238cu;
    // NOP
    // 0x4b2390: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x4b2390u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2394: 0x8f82b8fc  lw          $v0, -0x4704($gp)
    ctx->pc = 0x4b2394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949116)));
    // 0x4b2398: 0x8f87b900  lw          $a3, -0x4700($gp)
    ctx->pc = 0x4b2398u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949120)));
    // 0x4b239c: 0x18e00017  blez        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x4B239Cu;
    {
        const bool branch_taken_0x4b239c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x4B23A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B239Cu;
        // 0x4b23a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b239c) {
            ctx->pc = 0x4B23FCu;
            goto label_4b23fc;
        }
    }
    ctx->pc = 0x4B23A4u;
    // 0x4b23a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4b23a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b23a8: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x4b23a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b23ac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4b23acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b23b0:
    // 0x4b23b0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4b23b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b23b4: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4B23B4u;
    {
        const bool branch_taken_0x4b23b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b23b4) {
            ctx->pc = 0x4B23B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B23B4u;
            // 0x4b23b8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B23F0u;
            goto label_4b23f0;
        }
    }
    ctx->pc = 0x4B23BCu;
    // 0x4b23bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b23bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b23c0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x4b23c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x4b23c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4b23c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b23c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4b23c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b23cc: 0x506a0004  beql        $v1, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B23CCu;
    {
        const bool branch_taken_0x4b23cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        if (branch_taken_0x4b23cc) {
            ctx->pc = 0x4B23D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B23CCu;
            // 0x4b23d0: 0x8c420020  lw          $v0, 0x20($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B23E0u;
            goto label_4b23e0;
        }
    }
    ctx->pc = 0x4B23D4u;
    // 0x4b23d4: 0x54690006  bnel        $v1, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B23D4u;
    {
        const bool branch_taken_0x4b23d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x4b23d4) {
            ctx->pc = 0x4B23D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B23D4u;
            // 0x4b23d8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B23F0u;
            goto label_4b23f0;
        }
    }
    ctx->pc = 0x4B23DCu;
    // 0x4b23dc: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x4b23dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_4b23e0:
    // 0x4b23e0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B23E0u;
    {
        const bool branch_taken_0x4b23e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b23e0) {
            ctx->pc = 0x4B23E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B23E0u;
            // 0x4b23e4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B23F0u;
            goto label_4b23f0;
        }
    }
    ctx->pc = 0x4B23E8u;
    // 0x4b23e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4B23E8u;
    {
        const bool branch_taken_0x4b23e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B23E8u;
        // 0x4b23ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b23e8) {
            ctx->pc = 0x4B2400u;
            goto label_4b2400;
        }
    }
    ctx->pc = 0x4B23F0u;
label_4b23f0:
    // 0x4b23f0: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x4b23f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x4b23f4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4B23F4u;
    {
        const bool branch_taken_0x4b23f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B23F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B23F4u;
        // 0x4b23f8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b23f4) {
            ctx->pc = 0x4B23B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b23b0;
        }
    }
    ctx->pc = 0x4B23FCu;
label_4b23fc:
    // 0x4b23fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b23fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b2400:
    // 0x4b2400: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B2400u;
    {
        const bool branch_taken_0x4b2400 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2400u;
        // 0x4b2404: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2400) {
            ctx->pc = 0x4B2414u;
            goto label_4b2414;
        }
    }
    ctx->pc = 0x4B2408u;
    // 0x4b2408: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b2408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b240c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x4b240cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x4b2410: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x4b2410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_4b2414:
    // 0x4b2414: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4b2414u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4b2418: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2418u;
        // 0x4b241c: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B2420u;
}
