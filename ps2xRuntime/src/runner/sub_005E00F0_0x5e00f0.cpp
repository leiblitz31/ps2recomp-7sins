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

// Function: sub_005E00F0
// Address: 0x5e00f0 - 0x5e0af0
void sub_005E00F0_0x5e00f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005E00F0_0x5e00f0");
#endif

    switch (ctx->pc) {
        case 0x5e0144u: goto label_5e0144;
        case 0x5e0270u: goto label_5e0270;
        case 0x5e03d4u: goto label_5e03d4;
        case 0x5e0400u: goto label_5e0400;
        case 0x5e0440u: goto label_5e0440;
        case 0x5e049cu: goto label_5e049c;
        case 0x5e0564u: goto label_5e0564;
        case 0x5e060cu: goto label_5e060c;
        case 0x5e0634u: goto label_5e0634;
        case 0x5e06ecu: goto label_5e06ec;
        case 0x5e0774u: goto label_5e0774;
        case 0x5e0834u: goto label_5e0834;
        case 0x5e088cu: goto label_5e088c;
        case 0x5e08c0u: goto label_5e08c0;
        case 0x5e0920u: goto label_5e0920;
        case 0x5e0968u: goto label_5e0968;
        case 0x5e0990u: goto label_5e0990;
        default: break;
    }

    ctx->pc = 0x5e00f0u;

    // 0x5e00f0: 0x507a735f  beql        $v1, $k0, . + 4 + (0x735F << 2)
    ctx->pc = 0x5E00F0u;
    {
        const bool branch_taken_0x5e00f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 26));
        if (branch_taken_0x5e00f0) {
            ctx->pc = 0x5E00F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E00F0u;
            // 0x5e00f4: 0x20687461  addi        $t0, $v1, 0x7461 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29793, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FCE70u;
            return;
        }
    }
    ctx->pc = 0x5E00F8u;
    // 0x5e00f8: 0x4e203d21  .word       0x4E203D21                   # INVALID     $s1, $zero, 0x3D21 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e00f8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5E00F8 raw=0x4E203D21");
    // 0x5e00fc: 0x4c4c55  .word       0x004C4C55                   # INVALID     $v0, $t4, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5e00fcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5E00FC raw=0x004C4C55");
    // 0x5e0100: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0100u;
    {
        const bool branch_taken_0x5e0100 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0100) {
            ctx->pc = 0x5E0104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0100u;
            // 0x5e0104: 0x3a443274  xori        $a0, $s2, 0x3274 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)12916);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD294u;
            return;
        }
    }
    ctx->pc = 0x5E0108u;
    // 0x5e0108: 0x7465533a  .word       0x7465533A                   # INVALID     $v1, $a1, 0x533A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0108u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0108 raw=0x7465533A");
    // 0x5e010c: 0x746e6f46  .word       0x746E6F46                   # INVALID     $v1, $t6, 0x6F46 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e010cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E010C raw=0x746E6F46");
    // 0x5e0110: 0x68746150  ldl         $s4, 0x6150($v1)
    ctx->pc = 0x5e0110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24912); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x5e0114: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0114u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
    // 0x5e0118: 0x746f6720  .word       0x746F6720                   # INVALID     $v1, $t7, 0x6720 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0118u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0118 raw=0x746F6720");
    // 0x5e011c: 0x4e206120  .word       0x4E206120                   # INVALID     $s1, $zero, 0x6120 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e011cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5E011C raw=0x4E206120");
    // 0x5e0120: 0x204c4c55  addi        $t4, $v0, 0x4C55
    ctx->pc = 0x5e0120u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)19541, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x5e0124: 0x61726170  daddi       $s2, $t3, 0x6170
    ctx->pc = 0x5e0124u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24944; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
    // 0x5e0128: 0x6f70206d  ldr         $s0, 0x206D($k1)
    ctx->pc = 0x5e0128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8301); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x5e012c: 0x65746e69  daddiu      $s4, $t3, 0x6E69
    ctx->pc = 0x5e012cu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
    // 0x5e0130: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x5e0130u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x5e0134: 0x0  nop
    ctx->pc = 0x5e0134u;
    // NOP
    // 0x5e0138: 0x0  nop
    ctx->pc = 0x5e0138u;
    // NOP
    // 0x5e013c: 0x0  nop
    ctx->pc = 0x5e013cu;
    // NOP
    // 0x5e0140: 0x467a735f  .word       0x467A735F                   # INVALID     $s3, $k0, 0x735F # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5e0140u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x1F at 0x5E0140 raw=0x467A735F");
label_5e0144:
    // 0x5e0144: 0x6e746e6f  ldr         $s4, 0x6E6F($s3)
    ctx->pc = 0x5e0144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x5e0148: 0x20656d61  addi        $a1, $v1, 0x6D61
    ctx->pc = 0x5e0148u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28001, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x5e014c: 0x4e203d21  .word       0x4E203D21                   # INVALID     $s1, $zero, 0x3D21 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e014cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5E014C raw=0x4E203D21");
    // 0x5e0150: 0x4c4c55  .word       0x004C4C55                   # INVALID     $v0, $t4, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5e0150u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5E0150 raw=0x004C4C55");
    // 0x5e0154: 0x0  nop
    ctx->pc = 0x5e0154u;
    // NOP
    // 0x5e0158: 0x0  nop
    ctx->pc = 0x5e0158u;
    // NOP
    // 0x5e015c: 0x0  nop
    ctx->pc = 0x5e015cu;
    // NOP
    // 0x5e0160: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0160u;
    {
        const bool branch_taken_0x5e0160 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0160) {
            ctx->pc = 0x5E0164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0160u;
            // 0x5e0164: 0x3a443274  xori        $a0, $s2, 0x3274 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)12916);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD2F4u;
            return;
        }
    }
    ctx->pc = 0x5E0168u;
    // 0x5e0168: 0x6765423a  daddiu      $a1, $k1, 0x423A
    ctx->pc = 0x5e0168u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)16954);
    // 0x5e016c: 0x65526e69  daddiu      $s2, $t2, 0x6E69
    ctx->pc = 0x5e016cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)28265);
    // 0x5e0170: 0x7265646e  .word       0x7265646E                   # INVALID     $s3, $a1, 0x646E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0170u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5E0170 raw=0x7265646E");
    // 0x5e0174: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0174u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
    // 0x5e0178: 0x67746420  daddiu      $s4, $k1, 0x6420
    ctx->pc = 0x5e0178u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25632);
    // 0x5e017c: 0x64327452  daddiu      $s2, $at, 0x7452
    ctx->pc = 0x5e017cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)29778);
    // 0x5e0180: 0x6f687320  ldr         $t0, 0x7320($k1)
    ctx->pc = 0x5e0180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29472); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x5e0184: 0x20646c75  addi        $a0, $v1, 0x6C75
    ctx->pc = 0x5e0184u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27765, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5e0188: 0x69206562  ldl         $zero, 0x6562($t1)
    ctx->pc = 0x5e0188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25954); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
    // 0x5e018c: 0x6974696e  ldl         $s4, 0x696E($t3)
    ctx->pc = 0x5e018cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x5e0190: 0x73696c61  .word       0x73696C61                   # maddu1      $t5, $k1, $t1 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0190u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 9); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x5e0194: 0xa2e6465  j           func_8B99194
    ctx->pc = 0x5E0194u;
    ctx->pc = 0x8B99194u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8B99194u, 0x5E0194u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5E019Cu;
    // 0x5e019c: 0x0  nop
    ctx->pc = 0x5e019cu;
    // NOP
    // 0x5e01a0: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E01A0u;
    {
        const bool branch_taken_0x5e01a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e01a0) {
            ctx->pc = 0x5E01A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E01A0u;
            // 0x5e01a4: 0x3a443274  xori        $a0, $s2, 0x3274 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)12916);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD334u;
            return;
        }
    }
    ctx->pc = 0x5E01A8u;
    // 0x5e01a8: 0x6765423a  daddiu      $a1, $k1, 0x423A
    ctx->pc = 0x5e01a8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)16954);
    // 0x5e01ac: 0x65526e69  daddiu      $s2, $t2, 0x6E69
    ctx->pc = 0x5e01acu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)28265);
    // 0x5e01b0: 0x7265646e  .word       0x7265646E                   # INVALID     $s3, $a1, 0x646E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e01b0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5E01B0 raw=0x7265646E");
    // 0x5e01b4: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e01b4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
    // 0x5e01b8: 0x32745220  andi        $s4, $s3, 0x5220
    ctx->pc = 0x5e01b8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)21024);
    // 0x5e01bc: 0x776f2064  .word       0x776F2064                   # INVALID     $k1, $t7, 0x2064 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e01bcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E01BC raw=0x776F2064");
    // 0x5e01c0: 0x6163206e  daddi       $v1, $t3, 0x206E
    ctx->pc = 0x5e01c0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8302; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
    // 0x5e01c4: 0x6172656d  daddi       $s2, $t3, 0x656D
    ctx->pc = 0x5e01c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25965; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
    // 0x5e01c8: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e01c8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E01C8 raw=0x746F6E20");
    // 0x5e01cc: 0x74657320  .word       0x74657320                   # INVALID     $v1, $a1, 0x7320 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e01ccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E01CC raw=0x74657320");
    // 0x5e01d0: 0x70207075  .word       0x70207075                   # INVALID     $at, $zero, 0x7075 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e01d0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x5E01D0 raw=0x70207075");
    // 0x5e01d4: 0x65706f72  daddiu      $s0, $t3, 0x6F72
    ctx->pc = 0x5e01d4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28530);
    // 0x5e01d8: 0x796c72  tlt         $v1, $t9, 433
    ctx->pc = 0x5e01d8u;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x5e01dc: 0x0  nop
    ctx->pc = 0x5e01dcu;
    // NOP
    // 0x5e01e0: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E01E0u;
    {
        const bool branch_taken_0x5e01e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e01e0) {
            ctx->pc = 0x5E01E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E01E0u;
            // 0x5e01e4: 0x616d4977  daddi       $t5, $t3, 0x4977 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)18807; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD374u;
            return;
        }
    }
    ctx->pc = 0x5E01E8u;
    // 0x5e01e8: 0x632e6567  daddi       $t6, $t9, 0x6567
    ctx->pc = 0x5e01e8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)25959; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x5e01ec: 0x7070  tge         $zero, $zero, 449
    ctx->pc = 0x5e01ecu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x5e01f0: 0x78655470  lq          $a1, 0x5470($v1)
    ctx->pc = 0x5e01f0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 21616)));
    // 0x5e01f4: 0x65727574  daddiu      $s2, $t3, 0x7574
    ctx->pc = 0x5e01f4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30068);
    // 0x5e01f8: 0x74736152  .word       0x74736152                   # INVALID     $v1, $s3, 0x6152 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e01f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E01F8 raw=0x74736152");
    // 0x5e01fc: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5e01fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x5e0200: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5e0200u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
    // 0x5e0204: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5e0204u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5e0208: 0x74786574  .word       0x74786574                   # INVALID     $v1, $t8, 0x6574 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0208u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0208 raw=0x74786574");
    // 0x5e020c: 0x657275  .word       0x00657275                   # INVALID     $v1, $a1, 0x7275 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5e020cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x5E020C raw=0x00657275");
    // 0x5e0210: 0x74646957  .word       0x74646957                   # INVALID     $v1, $a0, 0x6957 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0210u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0210 raw=0x74646957");
    // 0x5e0214: 0x3d3d2068  .word       0x3D3D2068                   # lui         $sp, 0x2068 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0214u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)8296 << 16));
    // 0x5e0218: 0x69654820  ldl         $a1, 0x4820($t3)
    ctx->pc = 0x5e0218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 18464); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x5e021c: 0x746867  .word       0x00746867                   # nor         $t5, $v1, $s4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5e021cu;
    SET_GPR_U64(ctx, 13, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 20)));
    // 0x5e0220: 0x206e6f4e  addi        $t6, $v1, 0x6F4E
    ctx->pc = 0x5e0220u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28494, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x5e0224: 0x61757173  daddi       $s5, $t3, 0x7173
    ctx->pc = 0x5e0224u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29043; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
    // 0x5e0228: 0x74206572  .word       0x74206572                   # INVALID     $at, $zero, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0228u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0228 raw=0x74206572");
    // 0x5e022c: 0x75747865  .word       0x75747865                   # INVALID     $t3, $s4, 0x7865 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e022cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E022C raw=0x75747865");
    // 0x5e0230: 0x6e206572  ldr         $zero, 0x6572($s1)
    ctx->pc = 0x5e0230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 25970); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5e0234: 0x7320746f  .word       0x7320746F                   # INVALID     $t9, $zero, 0x746F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0234u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5E0234 raw=0x7320746F");
    // 0x5e0238: 0x6f707075  ldr         $s0, 0x7075($k1)
    ctx->pc = 0x5e0238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28789); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x5e023c: 0x64657472  daddiu      $a1, $v1, 0x7472
    ctx->pc = 0x5e023cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29810);
    // 0x5e0240: 0x0  nop
    ctx->pc = 0x5e0240u;
    // NOP
    // 0x5e0244: 0x0  nop
    ctx->pc = 0x5e0244u;
    // NOP
    // 0x5e0248: 0x77654e70  .word       0x77654E70                   # INVALID     $k1, $a1, 0x4E70 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0248u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0248 raw=0x77654E70");
    // 0x5e024c: 0x74736152  .word       0x74736152                   # INVALID     $v1, $s3, 0x6152 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e024cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E024C raw=0x74736152");
    // 0x5e0250: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5e0250u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x5e0254: 0x0  nop
    ctx->pc = 0x5e0254u;
    // NOP
    // 0x5e0258: 0x0  nop
    ctx->pc = 0x5e0258u;
    // NOP
    // 0x5e025c: 0x0  nop
    ctx->pc = 0x5e025cu;
    // NOP
    // 0x5e0260: 0x276e6143  addiu       $t6, $k1, 0x6143
    ctx->pc = 0x5e0260u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 27), 24899));
    // 0x5e0264: 0x72632074  .word       0x72632074                   # psllh       $a0, $v1, 1 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0264u;
    SET_GPR_VEC(ctx, 4, _mm_slli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x5e0268: 0x65746165  daddiu      $s4, $t3, 0x6165
    ctx->pc = 0x5e0268u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24933);
    // 0x5e026c: 0x73615220  .word       0x73615220                   # madd1       $t2, $k1, $at # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e026cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_5e0270:
    // 0x5e0270: 0x726574  teq         $v1, $s2, 405
    ctx->pc = 0x5e0270u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
    // 0x5e0274: 0x0  nop
    ctx->pc = 0x5e0274u;
    // NOP
    // 0x5e0278: 0x6d655470  ldr         $a1, 0x5470($t3)
    ctx->pc = 0x5e0278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 21616); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x5e027c: 0x73615270  .word       0x73615270                   # INVALID     $k1, $at, 0x5270 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x5e027cu;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x9 at 0x5E027C raw=0x73615270");
    // 0x5e0280: 0x726574  teq         $v1, $s2, 405
    ctx->pc = 0x5e0280u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
    // 0x5e0284: 0x0  nop
    ctx->pc = 0x5e0284u;
    // NOP
    // 0x5e0288: 0x0  nop
    ctx->pc = 0x5e0288u;
    // NOP
    // 0x5e028c: 0x0  nop
    ctx->pc = 0x5e028cu;
    // NOP
    // 0x5e0290: 0x276e6143  addiu       $t6, $k1, 0x6143
    ctx->pc = 0x5e0290u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 27), 24899));
    // 0x5e0294: 0x72632074  .word       0x72632074                   # psllh       $a0, $v1, 1 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0294u;
    SET_GPR_VEC(ctx, 4, _mm_slli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x5e0298: 0x65746165  daddiu      $s4, $t3, 0x6165
    ctx->pc = 0x5e0298u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24933);
    // 0x5e029c: 0x616d6920  daddi       $t5, $t3, 0x6920
    ctx->pc = 0x5e029cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26912; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
    // 0x5e02a0: 0x6567  .word       0x00006567                   # not         $t4, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5e02a0u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
    // 0x5e02a4: 0x0  nop
    ctx->pc = 0x5e02a4u;
    // NOP
    // 0x5e02a8: 0x657a6973  daddiu      $k0, $t3, 0x6973
    ctx->pc = 0x5e02a8u;
    SET_GPR_S64(ctx, 26, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26995);
    // 0x5e02ac: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5e02acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
    // 0x5e02b0: 0x66302e30  daddiu      $s0, $s1, 0x2E30
    ctx->pc = 0x5e02b0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)11824);
    // 0x5e02b4: 0x0  nop
    ctx->pc = 0x5e02b4u;
    // NOP
    // 0x5e02b8: 0x69766944  ldl         $s6, 0x6944($t3)
    ctx->pc = 0x5e02b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
    // 0x5e02bc: 0x65206564  daddiu      $zero, $t1, 0x6564
    ctx->pc = 0x5e02bcu;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)25956);
    // 0x5e02c0: 0x726f7272  .word       0x726F7272                   # INVALID     $s3, $t7, 0x7272 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e02c0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5E02C0 raw=0x726F7272");
    // 0x5e02c4: 0x2120  .word       0x00002120                   # add         $a0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5e02c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x5e02c8: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E02C8u;
    {
        const bool branch_taken_0x5e02c8 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e02c8) {
            ctx->pc = 0x5E02CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E02C8u;
            // 0x5e02cc: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD45Cu;
            return;
        }
    }
    ctx->pc = 0x5E02D0u;
    // 0x5e02d0: 0x632e4432  daddi       $t6, $t9, 0x4432
    ctx->pc = 0x5e02d0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)17458; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x5e02d4: 0x7070  tge         $zero, $zero, 449
    ctx->pc = 0x5e02d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x5e02d8: 0x0  nop
    ctx->pc = 0x5e02d8u;
    // NOP
    // 0x5e02dc: 0x0  nop
    ctx->pc = 0x5e02dcu;
    // NOP
    // 0x5e02e0: 0x6a624f5f  ldl         $v0, 0x4F5F($s3)
    ctx->pc = 0x5e02e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 20319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x5e02e4: 0x54746365  bnel        $v1, $s4, . + 4 + (0x6365 << 2)
    ctx->pc = 0x5E02E4u;
    {
        const bool branch_taken_0x5e02e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x5e02e4) {
            ctx->pc = 0x5E02E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E02E4u;
            // 0x5e02e8: 0x20657079  addi        $a1, $v1, 0x7079 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28793, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F907Cu;
            return;
        }
    }
    ctx->pc = 0x5E02ECu;
    // 0x5e02ec: 0x5444203c  bnel        $v0, $a0, . + 4 + (0x203C << 2)
    ctx->pc = 0x5E02ECu;
    {
        const bool branch_taken_0x5e02ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x5e02ec) {
            ctx->pc = 0x5E02F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E02ECu;
            // 0x5e02f0: 0x4a424f47  vsubw.z     $vf29, $vf9, $vf2w (Delay Slot)
            { __m128 res = PS2_VSUB(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5E83E0u;
            return;
        }
    }
    ctx->pc = 0x5E02F4u;
    // 0x5e02f4: 0x4e5f4432  .word       0x4E5F4432                   # INVALID     $s2, $ra, 0x4432 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e02f4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5E02F4 raw=0x4E5F4432");
    // 0x5e02f8: 0x59544d55  .word       0x59544D55                   # blezl       $t2, . + 4 + (0x4D55 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5E02F8u;
    {
        const bool branch_taken_0x5e02f8 = (GPR_S32(ctx, 10) <= 0);
        if (branch_taken_0x5e02f8) {
            ctx->pc = 0x5E02FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E02F8u;
            // 0x5e02fc: 0x534550  .word       0x00534550                   # mfhi        $t0 # 00530540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 8, ctx->hi);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F3850u;
            return;
        }
    }
    ctx->pc = 0x5E0300u;
    // 0x5e0300: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0300u;
    {
        const bool branch_taken_0x5e0300 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0300) {
            ctx->pc = 0x5E0304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0300u;
            // 0x5e0304: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD494u;
            return;
        }
    }
    ctx->pc = 0x5E0308u;
    // 0x5e0308: 0x3a3a6432  xori        $k0, $s1, 0x6432
    ctx->pc = 0x5e0308u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25650);
    // 0x5e030c: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E030Cu;
    {
        const bool branch_taken_0x5e030c = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e030c) {
            ctx->pc = 0x5E0310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E030Cu;
            // 0x5e0310: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD4A0u;
            return;
        }
    }
    ctx->pc = 0x5E0314u;
    // 0x5e0314: 0x2d206432  sltiu       $zero, $t1, 0x6432
    ctx->pc = 0x5e0314u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)25650) ? 1 : 0);
    // 0x5e0318: 0x67203e2d  daddiu      $zero, $t9, 0x3E2D
    ctx->pc = 0x5e0318u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)15917);
    // 0x5e031c: 0x6120746f  daddi       $zero, $t1, 0x746F
    ctx->pc = 0x5e031cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)29807; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5e0320: 0x6e69206e  ldr         $t1, 0x206E($s3)
    ctx->pc = 0x5e0320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5e0324: 0x696c6176  ldl         $t4, 0x6176($t3)
    ctx->pc = 0x5e0324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24950); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x5e0328: 0x64322064  daddiu      $s2, $at, 0x2064
    ctx->pc = 0x5e0328u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)8292);
    // 0x5e032c: 0x6a626f20  ldl         $v0, 0x6F20($s3)
    ctx->pc = 0x5e032cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x5e0330: 0x20746365  addi        $s4, $v1, 0x6365
    ctx->pc = 0x5e0330u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25445, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x5e0334: 0x65707974  daddiu      $s0, $t3, 0x7974
    ctx->pc = 0x5e0334u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)31092);
    // 0x5e0338: 0x0  nop
    ctx->pc = 0x5e0338u;
    // NOP
    // 0x5e033c: 0x0  nop
    ctx->pc = 0x5e033cu;
    // NOP
    // 0x5e0340: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0340u;
    {
        const bool branch_taken_0x5e0340 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0340) {
            ctx->pc = 0x5E0344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0340u;
            // 0x5e0344: 0x3a443274  xori        $a0, $s2, 0x3274 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)12916);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD4D4u;
            return;
        }
    }
    ctx->pc = 0x5E0348u;
    // 0x5e0348: 0x4973493a  .word       0x4973493A                   # INVALID     $t3, $s3, 0x493A # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5e0348u;
    throw std::runtime_error("Unhandled COP2 format: 0xB at 0x5E0348 raw=0x4973493A");
    // 0x5e034c: 0x6974696e  ldl         $s4, 0x696E($t3)
    ctx->pc = 0x5e034cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x5e0350: 0x73696c61  .word       0x73696C61                   # maddu1      $t5, $k1, $t1 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0350u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 9); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x5e0354: 0x29286465  slti        $t0, $t1, 0x6465
    ctx->pc = 0x5e0354u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)25701) ? 1 : 0);
    // 0x5e0358: 0x0  nop
    ctx->pc = 0x5e0358u;
    // NOP
    // 0x5e035c: 0x0  nop
    ctx->pc = 0x5e035cu;
    // NOP
    // 0x5e0360: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0360u;
    {
        const bool branch_taken_0x5e0360 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0360) {
            ctx->pc = 0x5E0364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0360u;
            // 0x5e0364: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD4F4u;
            return;
        }
    }
    ctx->pc = 0x5E0368u;
    // 0x5e0368: 0x3a3a6432  xori        $k0, $s1, 0x6432
    ctx->pc = 0x5e0368u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25650);
    // 0x5e036c: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E036Cu;
    {
        const bool branch_taken_0x5e036c = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e036c) {
            ctx->pc = 0x5E0370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E036Cu;
            // 0x5e0370: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD500u;
            return;
        }
    }
    ctx->pc = 0x5E0374u;
    // 0x5e0374: 0x2d206432  sltiu       $zero, $t1, 0x6432
    ctx->pc = 0x5e0374u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)25650) ? 1 : 0);
    // 0x5e0378: 0x64203e2d  daddiu      $zero, $at, 0x3E2D
    ctx->pc = 0x5e0378u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)15917);
    // 0x5e037c: 0x74526774  .word       0x74526774                   # INVALID     $v0, $s2, 0x6774 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e037cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E037C raw=0x74526774");
    // 0x5e0380: 0x73204432  .word       0x73204432                   # INVALID     $t9, $zero, 0x4432 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0380u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5E0380 raw=0x73204432");
    // 0x5e0384: 0x6c756f68  ldr         $s5, 0x6F68($v1)
    ctx->pc = 0x5e0384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28520); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x5e0388: 0x65622064  daddiu      $v0, $t3, 0x2064
    ctx->pc = 0x5e0388u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8292);
    // 0x5e038c: 0x696e6920  ldl         $t6, 0x6920($t3)
    ctx->pc = 0x5e038cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26912); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x5e0390: 0x6c616974  ldr         $at, 0x6974($v1)
    ctx->pc = 0x5e0390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5e0394: 0x64657369  daddiu      $a1, $v1, 0x7369
    ctx->pc = 0x5e0394u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29545);
    // 0x5e0398: 0x206e6920  addi        $t6, $v1, 0x6920
    ctx->pc = 0x5e0398u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x5e039c: 0x6564726f  daddiu      $a0, $t3, 0x726F
    ctx->pc = 0x5e039cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29295);
    // 0x5e03a0: 0x6f742072  ldr         $s4, 0x2072($k1)
    ctx->pc = 0x5e03a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x5e03a4: 0x65737520  daddiu      $s3, $t3, 0x7520
    ctx->pc = 0x5e03a4u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29984);
    // 0x5e03a8: 0x69687420  ldl         $t0, 0x7420($t3)
    ctx->pc = 0x5e03a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29728); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x5e03ac: 0x75662073  .word       0x75662073                   # INVALID     $t3, $a2, 0x2073 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e03acu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E03AC raw=0x75662073");
    // 0x5e03b0: 0x6974636e  ldl         $s4, 0x636E($t3)
    ctx->pc = 0x5e03b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25454); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x5e03b4: 0xa6e6f  .word       0x000A6E6F                   # dsubu       $t5, $zero, $t2 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5e03b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 10));
    // 0x5e03b8: 0x0  nop
    ctx->pc = 0x5e03b8u;
    // NOP
    // 0x5e03bc: 0x0  nop
    ctx->pc = 0x5e03bcu;
    // NOP
    // 0x5e03c0: 0x4f705f6d  .word       0x4F705F6D                   # INVALID     $k1, $s0, 0x5F6D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e03c0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5E03C0 raw=0x4F705F6D");
    // 0x5e03c4: 0x63656a62  daddi       $a1, $k1, 0x6A62
    ctx->pc = 0x5e03c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27234; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x5e03c8: 0x3d212074  .word       0x3D212074                   # lui         $at, 0x2074 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e03c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8308 << 16));
    // 0x5e03cc: 0x4c554e20  .word       0x4C554E20                   # INVALID     $v0, $s5, 0x4E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e03ccu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5E03CC raw=0x4C554E20");
    // 0x5e03d0: 0x4c  syscall     1
    ctx->pc = 0x5e03d0u;
    ctx->pc = 0x5E03D4u;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_5e03d4:
    // 0x5e03d4: 0x0  nop
    ctx->pc = 0x5e03d4u;
    // NOP
    // 0x5e03d8: 0x0  nop
    ctx->pc = 0x5e03d8u;
    // NOP
    // 0x5e03dc: 0x0  nop
    ctx->pc = 0x5e03dcu;
    // NOP
    // 0x5e03e0: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E03E0u;
    {
        const bool branch_taken_0x5e03e0 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e03e0) {
            ctx->pc = 0x5E03E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E03E0u;
            // 0x5e03e4: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD574u;
            return;
        }
    }
    ctx->pc = 0x5E03E8u;
    // 0x5e03e8: 0x29286432  slti        $t0, $t1, 0x6432
    ctx->pc = 0x5e03e8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)25650) ? 1 : 0);
    // 0x5e03ec: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e03ecu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
    // 0x5e03f0: 0x32745220  andi        $s4, $s3, 0x5220
    ctx->pc = 0x5e03f0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)21024);
    // 0x5e03f4: 0x61685364  daddi       $t0, $t3, 0x5364
    ctx->pc = 0x5e03f4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21348; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
    // 0x5e03f8: 0x72436570  .word       0x72436570                   # INVALID     $s2, $v1, 0x6570 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x5e03f8u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x15 at 0x5E03F8 raw=0x72436570");
    // 0x5e03fc: 0x65746165  daddiu      $s4, $t3, 0x6165
    ctx->pc = 0x5e03fcu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24933);
label_5e0400:
    // 0x5e0400: 0x69616620  ldl         $at, 0x6620($t3)
    ctx->pc = 0x5e0400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
    // 0x5e0404: 0xa64656c  j           func_99195B0
    ctx->pc = 0x5E0404u;
    ctx->pc = 0x99195B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x99195B0u, 0x5E0404u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5E040Cu;
    // 0x5e040c: 0x0  nop
    ctx->pc = 0x5e040cu;
    // NOP
    // 0x5e0410: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0410u;
    {
        const bool branch_taken_0x5e0410 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0410) {
            ctx->pc = 0x5E0414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0410u;
            // 0x5e0414: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD5A4u;
            return;
        }
    }
    ctx->pc = 0x5E0418u;
    // 0x5e0418: 0x3a3a6432  xori        $k0, $s1, 0x6432
    ctx->pc = 0x5e0418u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25650);
    // 0x5e041c: 0x44746547  .word       0x44746547                   # INVALID     $v1, $s4, 0x6547 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5e041cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x7 at 0x5E041C raw=0x44746547");
    // 0x5e0420: 0x6e656d69  ldr         $a1, 0x6D69($s3)
    ctx->pc = 0x5e0420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28009); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x5e0424: 0x6e6f6973  ldr         $t7, 0x6973($s3)
    ctx->pc = 0x5e0424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26995); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x5e0428: 0x20292873  addi        $t1, $at, 0x2873
    ctx->pc = 0x5e0428u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)10355, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x5e042c: 0x203e2d2d  addi        $fp, $at, 0x2D2D
    ctx->pc = 0x5e042cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11565, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
    // 0x5e0430: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0430u;
    {
        const bool branch_taken_0x5e0430 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0430) {
            ctx->pc = 0x5E0434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0430u;
            // 0x5e0434: 0x20443274  addi        $a0, $v0, 0x3274 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)12916, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD5C4u;
            return;
        }
    }
    ctx->pc = 0x5E0438u;
    // 0x5e0438: 0x756f6873  .word       0x756F6873                   # INVALID     $t3, $t7, 0x6873 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0438u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0438 raw=0x756F6873");
    // 0x5e043c: 0x6220646c  daddi       $zero, $s1, 0x646C
    ctx->pc = 0x5e043cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)25708; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_5e0440:
    // 0x5e0440: 0x6e692065  ldr         $t1, 0x2065($s3)
    ctx->pc = 0x5e0440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5e0444: 0x61697469  daddi       $t1, $t3, 0x7469
    ctx->pc = 0x5e0444u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29801; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x5e0448: 0x6573696c  daddiu      $s3, $t3, 0x696C
    ctx->pc = 0x5e0448u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26988);
    // 0x5e044c: 0x6e692064  ldr         $t1, 0x2064($s3)
    ctx->pc = 0x5e044cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5e0450: 0x64726f20  daddiu      $s2, $v1, 0x6F20
    ctx->pc = 0x5e0450u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28448);
    // 0x5e0454: 0x74207265  .word       0x74207265                   # INVALID     $at, $zero, 0x7265 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0454u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0454 raw=0x74207265");
    // 0x5e0458: 0x7375206f  .word       0x7375206F                   # INVALID     $k1, $s5, 0x206F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0458u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5E0458 raw=0x7375206F");
    // 0x5e045c: 0x68742065  ldl         $s4, 0x2065($v1)
    ctx->pc = 0x5e045cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x5e0460: 0x66207369  daddiu      $zero, $s1, 0x7369
    ctx->pc = 0x5e0460u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)29545);
    // 0x5e0464: 0x74636e75  .word       0x74636E75                   # INVALID     $v1, $v1, 0x6E75 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0464u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0464 raw=0x74636E75");
    // 0x5e0468: 0xa6e6f69  j           func_9B9BDA4
    ctx->pc = 0x5E0468u;
    ctx->pc = 0x9B9BDA4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9B9BDA4u, 0x5E0468u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5E0470u;
    // 0x5e0470: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0470u;
    {
        const bool branch_taken_0x5e0470 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0470) {
            ctx->pc = 0x5E0474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0470u;
            // 0x5e0474: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD604u;
            return;
        }
    }
    ctx->pc = 0x5E0478u;
    // 0x5e0478: 0x3a3a6432  xori        $k0, $s1, 0x6432
    ctx->pc = 0x5e0478u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25650);
    // 0x5e047c: 0x44746547  .word       0x44746547                   # INVALID     $v1, $s4, 0x6547 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5e047cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x7 at 0x5E047C raw=0x44746547");
    // 0x5e0480: 0x6e656d69  ldr         $a1, 0x6D69($s3)
    ctx->pc = 0x5e0480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28009); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x5e0484: 0x6e6f6973  ldr         $t7, 0x6973($s3)
    ctx->pc = 0x5e0484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26995); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x5e0488: 0x20292873  addi        $t1, $at, 0x2873
    ctx->pc = 0x5e0488u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)10355, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x5e048c: 0x203e2d2d  addi        $fp, $at, 0x2D2D
    ctx->pc = 0x5e048cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11565, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
    // 0x5e0490: 0x65747461  daddiu      $s4, $t3, 0x7461
    ctx->pc = 0x5e0490u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29793);
    // 0x5e0494: 0x6974706d  ldl         $s4, 0x706D($t3)
    ctx->pc = 0x5e0494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28781); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x5e0498: 0x7420676e  .word       0x7420676E                   # INVALID     $at, $zero, 0x676E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0498u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0498 raw=0x7420676E");
label_5e049c:
    // 0x5e049c: 0x6f6d206f  ldr         $t5, 0x206F($k1)
    ctx->pc = 0x5e049cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x5e04a0: 0x79666964  lq          $a2, 0x6964($t3)
    ctx->pc = 0x5e04a0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 11), 26980)));
    // 0x5e04a4: 0x206e6120  addi        $t6, $v1, 0x6120
    ctx->pc = 0x5e04a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24864, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x5e04a8: 0x656a626f  daddiu      $t2, $t3, 0x626F
    ctx->pc = 0x5e04a8u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25199);
    // 0x5e04ac: 0x6e207463  ldr         $zero, 0x7463($s1)
    ctx->pc = 0x5e04acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5e04b0: 0x6320746f  daddi       $zero, $t9, 0x746F
    ctx->pc = 0x5e04b0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)29807; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5e04b4: 0x74616572  .word       0x74616572                   # INVALID     $v1, $at, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e04b4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E04B4 raw=0x74616572");
    // 0x5e04b8: 0x79206465  lq          $zero, 0x6465($t1)
    ctx->pc = 0x5e04b8u;
    SET_GPR_VEC(ctx, 0, READ128(ADD32(GPR_U32(ctx, 9), 25701)));
    // 0x5e04bc: 0xa7465  .word       0x000A7465                   # or          $t6, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5e04bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
    // 0x5e04c0: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E04C0u;
    {
        const bool branch_taken_0x5e04c0 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e04c0) {
            ctx->pc = 0x5E04C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E04C0u;
            // 0x5e04c4: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD654u;
            return;
        }
    }
    ctx->pc = 0x5E04C8u;
    // 0x5e04c8: 0x3a3a6432  xori        $k0, $s1, 0x6432
    ctx->pc = 0x5e04c8u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25650);
    // 0x5e04cc: 0x44746547  .word       0x44746547                   # INVALID     $v1, $s4, 0x6547 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5e04ccu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x7 at 0x5E04CC raw=0x44746547");
    // 0x5e04d0: 0x6e656d69  ldr         $a1, 0x6D69($s3)
    ctx->pc = 0x5e04d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28009); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x5e04d4: 0x6e6f6973  ldr         $t7, 0x6973($s3)
    ctx->pc = 0x5e04d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26995); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x5e04d8: 0x20292873  addi        $t1, $at, 0x2873
    ctx->pc = 0x5e04d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)10355, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x5e04dc: 0x203e2d2d  addi        $fp, $at, 0x2D2D
    ctx->pc = 0x5e04dcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11565, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
    // 0x5e04e0: 0x20746f67  addi        $s4, $v1, 0x6F67
    ctx->pc = 0x5e04e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28519, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x5e04e4: 0x554e2061  bnel        $t2, $t6, . + 4 + (0x2061 << 2)
    ctx->pc = 0x5E04E4u;
    {
        const bool branch_taken_0x5e04e4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        if (branch_taken_0x5e04e4) {
            ctx->pc = 0x5E04E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E04E4u;
            // 0x5e04e8: 0x70204c4c  .word       0x70204C4C                   # INVALID     $at, $zero, 0x4C4C # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0xC at 0x5E04E8 raw=0x70204C4C");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5E866Cu;
            return;
        }
    }
    ctx->pc = 0x5E04ECu;
    // 0x5e04ec: 0x6d617261  ldr         $at, 0x7261($t3)
    ctx->pc = 0x5e04ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5e04f0: 0x696f7020  ldl         $t7, 0x7020($t3)
    ctx->pc = 0x5e04f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x5e04f4: 0x7265746e  .word       0x7265746E                   # INVALID     $s3, $a1, 0x746E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e04f4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5E04F4 raw=0x7265746E");
    // 0x5e04f8: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5e04f8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    // 0x5e04fc: 0x0  nop
    ctx->pc = 0x5e04fcu;
    // NOP
    // 0x5e0500: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0500u;
    {
        const bool branch_taken_0x5e0500 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0500) {
            ctx->pc = 0x5E0504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0500u;
            // 0x5e0504: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD694u;
            return;
        }
    }
    ctx->pc = 0x5E0508u;
    // 0x5e0508: 0x65526432  daddiu      $s2, $t2, 0x6432
    ctx->pc = 0x5e0508u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25650);
    // 0x5e050c: 0x3a3a7463  xori        $k0, $s1, 0x7463
    ctx->pc = 0x5e050cu;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29795);
    // 0x5e0510: 0x41746553  .word       0x41746553                   # INVALID     $t3, $s4, 0x6553 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5e0510u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x5E0510 raw=0x41746553");
    // 0x5e0514: 0x6168706c  daddi       $t0, $t3, 0x706C
    ctx->pc = 0x5e0514u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28780; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
    // 0x5e0518: 0x756c6156  .word       0x756C6156                   # INVALID     $t3, $t4, 0x6156 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0518u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0518 raw=0x756C6156");
    // 0x5e051c: 0x29287365  slti        $t0, $t1, 0x7365
    ctx->pc = 0x5e051cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)29541) ? 1 : 0);
    // 0x5e0520: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0520u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
    // 0x5e0524: 0x67746420  daddiu      $s4, $k1, 0x6420
    ctx->pc = 0x5e0524u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25632);
    // 0x5e0528: 0x44327452  .word       0x44327452                   # dmfc1       $s2, $f14 # 00000452 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5e0528u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x12 at 0x5E0528 raw=0x44327452");
    // 0x5e052c: 0x6f687320  ldr         $t0, 0x7320($k1)
    ctx->pc = 0x5e052cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29472); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x5e0530: 0x20646c75  addi        $a0, $v1, 0x6C75
    ctx->pc = 0x5e0530u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27765, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5e0534: 0x69206562  ldl         $zero, 0x6562($t1)
    ctx->pc = 0x5e0534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25954); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
    // 0x5e0538: 0x6974696e  ldl         $s4, 0x696E($t3)
    ctx->pc = 0x5e0538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x5e053c: 0x73696c61  .word       0x73696C61                   # maddu1      $t5, $k1, $t1 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e053cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 9); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x5e0540: 0x69206465  ldl         $zero, 0x6465($t1)
    ctx->pc = 0x5e0540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25701); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
    // 0x5e0544: 0x726f206e  .word       0x726F206E                   # INVALID     $s3, $t7, 0x206E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0544u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5E0544 raw=0x726F206E");
    // 0x5e0548: 0x20726564  addi        $s2, $v1, 0x6564
    ctx->pc = 0x5e0548u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
    // 0x5e054c: 0x75206f74  .word       0x75206F74                   # INVALID     $t1, $zero, 0x6F74 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e054cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E054C raw=0x75206F74");
    // 0x5e0550: 0x74206573  .word       0x74206573                   # INVALID     $at, $zero, 0x6573 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0550u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0550 raw=0x74206573");
    // 0x5e0554: 0x20736968  addi        $s3, $v1, 0x6968
    ctx->pc = 0x5e0554u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26984, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
    // 0x5e0558: 0x636e7566  daddi       $t6, $k1, 0x7566
    ctx->pc = 0x5e0558u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30054; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x5e055c: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x5e055cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x5e0560: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5e0560u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_5e0564:
    // 0x5e0564: 0x0  nop
    ctx->pc = 0x5e0564u;
    // NOP
    // 0x5e0568: 0x0  nop
    ctx->pc = 0x5e0568u;
    // NOP
    // 0x5e056c: 0x0  nop
    ctx->pc = 0x5e056cu;
    // NOP
    // 0x5e0570: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0570u;
    {
        const bool branch_taken_0x5e0570 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0570) {
            ctx->pc = 0x5E0574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0570u;
            // 0x5e0574: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD704u;
            return;
        }
    }
    ctx->pc = 0x5E0578u;
    // 0x5e0578: 0x65526432  daddiu      $s2, $t2, 0x6432
    ctx->pc = 0x5e0578u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25650);
    // 0x5e057c: 0x3a3a7463  xori        $k0, $s1, 0x7463
    ctx->pc = 0x5e057cu;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29795);
    // 0x5e0580: 0x41746553  .word       0x41746553                   # INVALID     $t3, $s4, 0x6553 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5e0580u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x5E0580 raw=0x41746553");
    // 0x5e0584: 0x6168706c  daddi       $t0, $t3, 0x706C
    ctx->pc = 0x5e0584u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28780; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
    // 0x5e0588: 0x756c6156  .word       0x756C6156                   # INVALID     $t3, $t4, 0x6156 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0588u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0588 raw=0x756C6156");
    // 0x5e058c: 0x29287365  slti        $t0, $t1, 0x7365
    ctx->pc = 0x5e058cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)29541) ? 1 : 0);
    // 0x5e0590: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0590u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
    // 0x5e0594: 0x74746120  .word       0x74746120                   # INVALID     $v1, $s4, 0x6120 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0594u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0594 raw=0x74746120");
    // 0x5e0598: 0x74706d65  .word       0x74706D65                   # INVALID     $v1, $s0, 0x6D65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0598u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0598 raw=0x74706D65");
    // 0x5e059c: 0x20676e69  addi        $a3, $v1, 0x6E69
    ctx->pc = 0x5e059cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28265, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x5e05a0: 0x6d206f74  ldr         $zero, 0x6F74($t1)
    ctx->pc = 0x5e05a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28532); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5e05a4: 0x6669646f  daddiu      $t1, $s3, 0x646F
    ctx->pc = 0x5e05a4u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25711);
    // 0x5e05a8: 0x6e612079  ldr         $at, 0x2079($s3)
    ctx->pc = 0x5e05a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8313); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5e05ac: 0x6a626f20  ldl         $v0, 0x6F20($s3)
    ctx->pc = 0x5e05acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x5e05b0: 0x20746365  addi        $s4, $v1, 0x6365
    ctx->pc = 0x5e05b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25445, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x5e05b4: 0x20746f6e  addi        $s4, $v1, 0x6F6E
    ctx->pc = 0x5e05b4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28526, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x5e05b8: 0x61657263  daddi       $a1, $t3, 0x7263
    ctx->pc = 0x5e05b8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29283; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x5e05bc: 0x20646574  addi        $a0, $v1, 0x6574
    ctx->pc = 0x5e05bcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25972, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5e05c0: 0xa746579  j           func_9D195E4
    ctx->pc = 0x5E05C0u;
    ctx->pc = 0x9D195E4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9D195E4u, 0x5E05C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5E05C8u;
    // 0x5e05c8: 0x0  nop
    ctx->pc = 0x5e05c8u;
    // NOP
    // 0x5e05cc: 0x0  nop
    ctx->pc = 0x5e05ccu;
    // NOP
    // 0x5e05d0: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E05D0u;
    {
        const bool branch_taken_0x5e05d0 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e05d0) {
            ctx->pc = 0x5E05D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E05D0u;
            // 0x5e05d4: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD764u;
            return;
        }
    }
    ctx->pc = 0x5E05D8u;
    // 0x5e05d8: 0x3a3a6432  xori        $k0, $s1, 0x6432
    ctx->pc = 0x5e05d8u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25650);
    // 0x5e05dc: 0x52746553  beql        $s3, $s4, . + 4 + (0x6553 << 2)
    ctx->pc = 0x5E05DCu;
    {
        const bool branch_taken_0x5e05dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        if (branch_taken_0x5e05dc) {
            ctx->pc = 0x5E05E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E05DCu;
            // 0x5e05e0: 0x4d616267  .word       0x4D616267                   # INVALID     $t3, $at, 0x6267 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x5E05E0 raw=0x4D616267");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F9B2Cu;
            return;
        }
    }
    ctx->pc = 0x5E05E4u;
    // 0x5e05e4: 0x28746c75  slti        $s4, $v1, 0x6C75
    ctx->pc = 0x5e05e4u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)27765) ? 1 : 0);
    // 0x5e05e8: 0x2d2d2029  sltiu       $t5, $t1, 0x2029
    ctx->pc = 0x5e05e8u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)8233) ? 1 : 0);
    // 0x5e05ec: 0x7464203e  .word       0x7464203E                   # INVALID     $v1, $a0, 0x203E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e05ecu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E05EC raw=0x7464203E");
    // 0x5e05f0: 0x32745267  andi        $s4, $s3, 0x5267
    ctx->pc = 0x5e05f0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)21095);
    // 0x5e05f4: 0x68732044  ldl         $s3, 0x2044($v1)
    ctx->pc = 0x5e05f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8260); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x5e05f8: 0x646c756f  daddiu      $t4, $v1, 0x756F
    ctx->pc = 0x5e05f8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)30063);
    // 0x5e05fc: 0x20656220  addi        $a1, $v1, 0x6220
    ctx->pc = 0x5e05fcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25120, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x5e0600: 0x74696e69  .word       0x74696E69                   # INVALID     $v1, $t1, 0x6E69 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0600u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0600 raw=0x74696E69");
    // 0x5e0604: 0x696c6169  ldl         $t4, 0x6169($t3)
    ctx->pc = 0x5e0604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24937); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x5e0608: 0x20646573  addi        $a0, $v1, 0x6573
    ctx->pc = 0x5e0608u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25971, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5e060c:
    // 0x5e060c: 0x6f206e69  ldr         $zero, 0x6E69($t9)
    ctx->pc = 0x5e060cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 28265); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5e0610: 0x72656472  .word       0x72656472                   # INVALID     $s3, $a1, 0x6472 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0610u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5E0610 raw=0x72656472");
    // 0x5e0614: 0x206f7420  addi        $t7, $v1, 0x7420
    ctx->pc = 0x5e0614u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29728, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x5e0618: 0x20657375  addi        $a1, $v1, 0x7375
    ctx->pc = 0x5e0618u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29557, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x5e061c: 0x73696874  .word       0x73696874                   # psllh       $t5, $t1, 1 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e061cu;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 9), 1));
    // 0x5e0620: 0x6e756620  ldr         $s5, 0x6620($s3)
    ctx->pc = 0x5e0620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x5e0624: 0x6f697463  ldr         $t1, 0x7463($k1)
    ctx->pc = 0x5e0624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5e0628: 0xa6e  .word       0x00000A6E                   # dsub        $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5e0628u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x5e062c: 0x0  nop
    ctx->pc = 0x5e062cu;
    // NOP
    // 0x5e0630: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
label_5e0634:
    if (ctx->pc == 0x5E0634u) {
        ctx->pc = 0x5E0634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5E0630u;
        // 0x5e0634: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5E0638u;
        goto label_fallthrough_0x5e0630;
    }
    ctx->pc = 0x5E0630u;
    {
        const bool branch_taken_0x5e0630 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0630) {
            ctx->pc = 0x5E0634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0630u;
            // 0x5e0634: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD7C4u;
            return;
        }
    }
label_fallthrough_0x5e0630:
    ctx->pc = 0x5E0638u;
    // 0x5e0638: 0x3a3a6432  xori        $k0, $s1, 0x6432
    ctx->pc = 0x5e0638u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25650);
    // 0x5e063c: 0x52746553  beql        $s3, $s4, . + 4 + (0x6553 << 2)
    ctx->pc = 0x5E063Cu;
    {
        const bool branch_taken_0x5e063c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        if (branch_taken_0x5e063c) {
            ctx->pc = 0x5E0640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E063Cu;
            // 0x5e0640: 0x4d616267  .word       0x4D616267                   # INVALID     $t3, $at, 0x6267 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x5E0640 raw=0x4D616267");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F9B8Cu;
            return;
        }
    }
    ctx->pc = 0x5E0644u;
    // 0x5e0644: 0x28746c75  slti        $s4, $v1, 0x6C75
    ctx->pc = 0x5e0644u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)27765) ? 1 : 0);
    // 0x5e0648: 0x2d2d2029  sltiu       $t5, $t1, 0x2029
    ctx->pc = 0x5e0648u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)8233) ? 1 : 0);
    // 0x5e064c: 0x7461203e  .word       0x7461203E                   # INVALID     $v1, $at, 0x203E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e064cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E064C raw=0x7461203E");
    // 0x5e0650: 0x706d6574  .word       0x706D6574                   # psllh       $t4, $t5, 21 # 00600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0650u;
    SET_GPR_VEC(ctx, 12, _mm_slli_epi16(GPR_VEC(ctx, 13), 21));
    // 0x5e0654: 0x676e6974  daddiu      $t6, $k1, 0x6974
    ctx->pc = 0x5e0654u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26996);
    // 0x5e0658: 0x206f7420  addi        $t7, $v1, 0x7420
    ctx->pc = 0x5e0658u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29728, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x5e065c: 0x69646f6d  ldl         $a0, 0x6F6D($t3)
    ctx->pc = 0x5e065cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x5e0660: 0x61207966  daddi       $zero, $t1, 0x7966
    ctx->pc = 0x5e0660u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)31078; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5e0664: 0x626f206e  daddi       $t7, $s3, 0x206E
    ctx->pc = 0x5e0664u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)8302; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
    // 0x5e0668: 0x7463656a  .word       0x7463656A                   # INVALID     $v1, $v1, 0x656A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0668u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0668 raw=0x7463656A");
    // 0x5e066c: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e066cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E066C raw=0x746F6E20");
    // 0x5e0670: 0x65726320  daddiu      $s2, $t3, 0x6320
    ctx->pc = 0x5e0670u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25376);
    // 0x5e0674: 0x64657461  daddiu      $a1, $v1, 0x7461
    ctx->pc = 0x5e0674u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29793);
    // 0x5e0678: 0x74657920  .word       0x74657920                   # INVALID     $v1, $a1, 0x7920 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0678u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0678 raw=0x74657920");
    // 0x5e067c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5e067cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    // 0x5e0680: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0680u;
    {
        const bool branch_taken_0x5e0680 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0680) {
            ctx->pc = 0x5E0684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0680u;
            // 0x5e0684: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD814u;
            return;
        }
    }
    ctx->pc = 0x5E0688u;
    // 0x5e0688: 0x3a3a6432  xori        $k0, $s1, 0x6432
    ctx->pc = 0x5e0688u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25650);
    // 0x5e068c: 0x56746553  bnel        $s3, $s4, . + 4 + (0x6553 << 2)
    ctx->pc = 0x5E068Cu;
    {
        const bool branch_taken_0x5e068c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        if (branch_taken_0x5e068c) {
            ctx->pc = 0x5E0690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E068Cu;
            // 0x5e0690: 0x62697369  daddi       $t1, $s3, 0x7369 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)29545; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F9BDCu;
            return;
        }
    }
    ctx->pc = 0x5E0694u;
    // 0x5e0694: 0x74696c69  .word       0x74696C69                   # INVALID     $v1, $t1, 0x6C69 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0694u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0694 raw=0x74696C69");
    // 0x5e0698: 0x20292879  addi        $t1, $at, 0x2879
    ctx->pc = 0x5e0698u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)10361, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x5e069c: 0x203e2d2d  addi        $fp, $at, 0x2D2D
    ctx->pc = 0x5e069cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11565, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
    // 0x5e06a0: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E06A0u;
    {
        const bool branch_taken_0x5e06a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e06a0) {
            ctx->pc = 0x5E06A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E06A0u;
            // 0x5e06a4: 0x20443274  addi        $a0, $v0, 0x3274 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)12916, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD834u;
            return;
        }
    }
    ctx->pc = 0x5E06A8u;
    // 0x5e06a8: 0x756f6873  .word       0x756F6873                   # INVALID     $t3, $t7, 0x6873 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e06a8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E06A8 raw=0x756F6873");
    // 0x5e06ac: 0x6220646c  daddi       $zero, $s1, 0x646C
    ctx->pc = 0x5e06acu;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)25708; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5e06b0: 0x6e692065  ldr         $t1, 0x2065($s3)
    ctx->pc = 0x5e06b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5e06b4: 0x61697469  daddi       $t1, $t3, 0x7469
    ctx->pc = 0x5e06b4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29801; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x5e06b8: 0x6573696c  daddiu      $s3, $t3, 0x696C
    ctx->pc = 0x5e06b8u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26988);
    // 0x5e06bc: 0x6e692064  ldr         $t1, 0x2064($s3)
    ctx->pc = 0x5e06bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5e06c0: 0x64726f20  daddiu      $s2, $v1, 0x6F20
    ctx->pc = 0x5e06c0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28448);
    // 0x5e06c4: 0x74207265  .word       0x74207265                   # INVALID     $at, $zero, 0x7265 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e06c4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E06C4 raw=0x74207265");
    // 0x5e06c8: 0x7375206f  .word       0x7375206F                   # INVALID     $k1, $s5, 0x206F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e06c8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5E06C8 raw=0x7375206F");
    // 0x5e06cc: 0x68742065  ldl         $s4, 0x2065($v1)
    ctx->pc = 0x5e06ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x5e06d0: 0x66207369  daddiu      $zero, $s1, 0x7369
    ctx->pc = 0x5e06d0u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)29545);
    // 0x5e06d4: 0x74636e75  .word       0x74636E75                   # INVALID     $v1, $v1, 0x6E75 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e06d4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E06D4 raw=0x74636E75");
    // 0x5e06d8: 0xa6e6f69  j           func_9B9BDA4
    ctx->pc = 0x5E06D8u;
    ctx->pc = 0x9B9BDA4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9B9BDA4u, 0x5E06D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5E06E0u;
    // 0x5e06e0: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E06E0u;
    {
        const bool branch_taken_0x5e06e0 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e06e0) {
            ctx->pc = 0x5E06E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E06E0u;
            // 0x5e06e4: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD874u;
            return;
        }
    }
    ctx->pc = 0x5E06E8u;
    // 0x5e06e8: 0x3a3a6432  xori        $k0, $s1, 0x6432
    ctx->pc = 0x5e06e8u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25650);
label_5e06ec:
    // 0x5e06ec: 0x56746553  bnel        $s3, $s4, . + 4 + (0x6553 << 2)
    ctx->pc = 0x5E06ECu;
    {
        const bool branch_taken_0x5e06ec = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        if (branch_taken_0x5e06ec) {
            ctx->pc = 0x5E06F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E06ECu;
            // 0x5e06f0: 0x62697369  daddi       $t1, $s3, 0x7369 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)29545; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F9C3Cu;
            return;
        }
    }
    ctx->pc = 0x5E06F4u;
    // 0x5e06f4: 0x74696c69  .word       0x74696C69                   # INVALID     $v1, $t1, 0x6C69 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e06f4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E06F4 raw=0x74696C69");
    // 0x5e06f8: 0x20292879  addi        $t1, $at, 0x2879
    ctx->pc = 0x5e06f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)10361, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x5e06fc: 0x203e2d2d  addi        $fp, $at, 0x2D2D
    ctx->pc = 0x5e06fcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11565, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
    // 0x5e0700: 0x65747461  daddiu      $s4, $t3, 0x7461
    ctx->pc = 0x5e0700u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29793);
    // 0x5e0704: 0x6974706d  ldl         $s4, 0x706D($t3)
    ctx->pc = 0x5e0704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28781); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x5e0708: 0x7420676e  .word       0x7420676E                   # INVALID     $at, $zero, 0x676E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0708u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0708 raw=0x7420676E");
    // 0x5e070c: 0x6f6d206f  ldr         $t5, 0x206F($k1)
    ctx->pc = 0x5e070cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x5e0710: 0x79666964  lq          $a2, 0x6964($t3)
    ctx->pc = 0x5e0710u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 11), 26980)));
    // 0x5e0714: 0x206e6120  addi        $t6, $v1, 0x6120
    ctx->pc = 0x5e0714u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24864, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x5e0718: 0x656a626f  daddiu      $t2, $t3, 0x626F
    ctx->pc = 0x5e0718u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25199);
    // 0x5e071c: 0x6e207463  ldr         $zero, 0x7463($s1)
    ctx->pc = 0x5e071cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5e0720: 0x6320746f  daddi       $zero, $t9, 0x746F
    ctx->pc = 0x5e0720u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)29807; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5e0724: 0x74616572  .word       0x74616572                   # INVALID     $v1, $at, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0724u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0724 raw=0x74616572");
    // 0x5e0728: 0x79206465  lq          $zero, 0x6465($t1)
    ctx->pc = 0x5e0728u;
    SET_GPR_VEC(ctx, 0, READ128(ADD32(GPR_U32(ctx, 9), 25701)));
    // 0x5e072c: 0xa7465  .word       0x000A7465                   # or          $t6, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5e072cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
    // 0x5e0730: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0730u;
    {
        const bool branch_taken_0x5e0730 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0730) {
            ctx->pc = 0x5E0734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0730u;
            // 0x5e0734: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD8C4u;
            return;
        }
    }
    ctx->pc = 0x5E0738u;
    // 0x5e0738: 0x3a3a6432  xori        $k0, $s1, 0x6432
    ctx->pc = 0x5e0738u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25650);
    // 0x5e073c: 0x6e617254  ldr         $at, 0x7254($s3)
    ctx->pc = 0x5e073cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5e0740: 0x74616c73  .word       0x74616C73                   # INVALID     $v1, $at, 0x6C73 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0740u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0740 raw=0x74616C73");
    // 0x5e0744: 0x20292865  addi        $t1, $at, 0x2865
    ctx->pc = 0x5e0744u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)10341, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x5e0748: 0x203e2d2d  addi        $fp, $at, 0x2D2D
    ctx->pc = 0x5e0748u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11565, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
    // 0x5e074c: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E074Cu;
    {
        const bool branch_taken_0x5e074c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e074c) {
            ctx->pc = 0x5E0750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E074Cu;
            // 0x5e0750: 0x20443274  addi        $a0, $v0, 0x3274 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)12916, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD8E0u;
            return;
        }
    }
    ctx->pc = 0x5E0754u;
    // 0x5e0754: 0x756f6873  .word       0x756F6873                   # INVALID     $t3, $t7, 0x6873 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0754u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0754 raw=0x756F6873");
    // 0x5e0758: 0x6220646c  daddi       $zero, $s1, 0x646C
    ctx->pc = 0x5e0758u;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)25708; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5e075c: 0x6e692065  ldr         $t1, 0x2065($s3)
    ctx->pc = 0x5e075cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5e0760: 0x61697469  daddi       $t1, $t3, 0x7469
    ctx->pc = 0x5e0760u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29801; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x5e0764: 0x6573696c  daddiu      $s3, $t3, 0x696C
    ctx->pc = 0x5e0764u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26988);
    // 0x5e0768: 0x6e692064  ldr         $t1, 0x2064($s3)
    ctx->pc = 0x5e0768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5e076c: 0x64726f20  daddiu      $s2, $v1, 0x6F20
    ctx->pc = 0x5e076cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28448);
    // 0x5e0770: 0x74207265  .word       0x74207265                   # INVALID     $at, $zero, 0x7265 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0770u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0770 raw=0x74207265");
label_5e0774:
    // 0x5e0774: 0x7375206f  .word       0x7375206F                   # INVALID     $k1, $s5, 0x206F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0774u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5E0774 raw=0x7375206F");
    // 0x5e0778: 0x68742065  ldl         $s4, 0x2065($v1)
    ctx->pc = 0x5e0778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x5e077c: 0x66207369  daddiu      $zero, $s1, 0x7369
    ctx->pc = 0x5e077cu;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)29545);
    // 0x5e0780: 0x74636e75  .word       0x74636E75                   # INVALID     $v1, $v1, 0x6E75 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0780u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0780 raw=0x74636E75");
    // 0x5e0784: 0xa6e6f69  j           func_9B9BDA4
    ctx->pc = 0x5E0784u;
    ctx->pc = 0x9B9BDA4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9B9BDA4u, 0x5E0784u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5E078Cu;
    // 0x5e078c: 0x0  nop
    ctx->pc = 0x5e078cu;
    // NOP
    // 0x5e0790: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0790u;
    {
        const bool branch_taken_0x5e0790 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0790) {
            ctx->pc = 0x5E0794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0790u;
            // 0x5e0794: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD924u;
            return;
        }
    }
    ctx->pc = 0x5E0798u;
    // 0x5e0798: 0x3a3a6432  xori        $k0, $s1, 0x6432
    ctx->pc = 0x5e0798u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25650);
    // 0x5e079c: 0x6e617254  ldr         $at, 0x7254($s3)
    ctx->pc = 0x5e079cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5e07a0: 0x74616c73  .word       0x74616C73                   # INVALID     $v1, $at, 0x6C73 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e07a0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E07A0 raw=0x74616C73");
    // 0x5e07a4: 0x20292865  addi        $t1, $at, 0x2865
    ctx->pc = 0x5e07a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)10341, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x5e07a8: 0x203e2d2d  addi        $fp, $at, 0x2D2D
    ctx->pc = 0x5e07a8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11565, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
    // 0x5e07ac: 0x65747461  daddiu      $s4, $t3, 0x7461
    ctx->pc = 0x5e07acu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29793);
    // 0x5e07b0: 0x6974706d  ldl         $s4, 0x706D($t3)
    ctx->pc = 0x5e07b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28781); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x5e07b4: 0x7420676e  .word       0x7420676E                   # INVALID     $at, $zero, 0x676E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e07b4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E07B4 raw=0x7420676E");
    // 0x5e07b8: 0x6f6d206f  ldr         $t5, 0x206F($k1)
    ctx->pc = 0x5e07b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x5e07bc: 0x79666964  lq          $a2, 0x6964($t3)
    ctx->pc = 0x5e07bcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 11), 26980)));
    // 0x5e07c0: 0x206e6120  addi        $t6, $v1, 0x6120
    ctx->pc = 0x5e07c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24864, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x5e07c4: 0x656a626f  daddiu      $t2, $t3, 0x626F
    ctx->pc = 0x5e07c4u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25199);
    // 0x5e07c8: 0x6e207463  ldr         $zero, 0x7463($s1)
    ctx->pc = 0x5e07c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5e07cc: 0x6320746f  daddi       $zero, $t9, 0x746F
    ctx->pc = 0x5e07ccu;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)29807; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5e07d0: 0x74616572  .word       0x74616572                   # INVALID     $v1, $at, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e07d0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E07D0 raw=0x74616572");
    // 0x5e07d4: 0x79206465  lq          $zero, 0x6465($t1)
    ctx->pc = 0x5e07d4u;
    SET_GPR_VEC(ctx, 0, READ128(ADD32(GPR_U32(ctx, 9), 25701)));
    // 0x5e07d8: 0xa7465  .word       0x000A7465                   # or          $t6, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5e07d8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
    // 0x5e07dc: 0x0  nop
    ctx->pc = 0x5e07dcu;
    // NOP
    // 0x5e07e0: 0x65527670  daddiu      $s2, $t2, 0x7670
    ctx->pc = 0x5e07e0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)30320);
    // 0x5e07e4: 0x646f4374  daddiu      $t7, $v1, 0x4374
    ctx->pc = 0x5e07e4u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)17268);
    // 0x5e07e8: 0x4e3d2165  .word       0x4E3D2165                   # INVALID     $s1, $sp, 0x2165 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e07e8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5E07E8 raw=0x4E3D2165");
    // 0x5e07ec: 0x4c4c55  .word       0x004C4C55                   # INVALID     $v0, $t4, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5e07ecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5E07EC raw=0x004C4C55");
    // 0x5e07f0: 0x0  nop
    ctx->pc = 0x5e07f0u;
    // NOP
    // 0x5e07f4: 0x0  nop
    ctx->pc = 0x5e07f4u;
    // NOP
    // 0x5e07f8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e07f8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x5e07fc: 0x0  nop
    ctx->pc = 0x5e07fcu;
    // NOP
    // 0x5e0800: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0800u;
    {
        const bool branch_taken_0x5e0800 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0800) {
            ctx->pc = 0x5E0804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0800u;
            // 0x5e0804: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD994u;
            return;
        }
    }
    ctx->pc = 0x5E0808u;
    // 0x5e0808: 0x3a3a6432  xori        $k0, $s1, 0x6432
    ctx->pc = 0x5e0808u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25650);
    // 0x5e080c: 0x646e6552  daddiu      $t6, $v1, 0x6552
    ctx->pc = 0x5e080cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25938);
    // 0x5e0810: 0x29287265  slti        $t0, $t1, 0x7265
    ctx->pc = 0x5e0810u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)29285) ? 1 : 0);
    // 0x5e0814: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0814u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
    // 0x5e0818: 0x67746420  daddiu      $s4, $k1, 0x6420
    ctx->pc = 0x5e0818u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25632);
    // 0x5e081c: 0x44327452  .word       0x44327452                   # dmfc1       $s2, $f14 # 00000452 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5e081cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x12 at 0x5E081C raw=0x44327452");
    // 0x5e0820: 0x6f687320  ldr         $t0, 0x7320($k1)
    ctx->pc = 0x5e0820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29472); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x5e0824: 0x20646c75  addi        $a0, $v1, 0x6C75
    ctx->pc = 0x5e0824u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27765, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5e0828: 0x69206562  ldl         $zero, 0x6562($t1)
    ctx->pc = 0x5e0828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25954); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
    // 0x5e082c: 0x6974696e  ldl         $s4, 0x696E($t3)
    ctx->pc = 0x5e082cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x5e0830: 0x73696c61  .word       0x73696C61                   # maddu1      $t5, $k1, $t1 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0830u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 9); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_5e0834:
    // 0x5e0834: 0x69206465  ldl         $zero, 0x6465($t1)
    ctx->pc = 0x5e0834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25701); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
    // 0x5e0838: 0x726f206e  .word       0x726F206E                   # INVALID     $s3, $t7, 0x206E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0838u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5E0838 raw=0x726F206E");
    // 0x5e083c: 0x20726564  addi        $s2, $v1, 0x6564
    ctx->pc = 0x5e083cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
    // 0x5e0840: 0x75206f74  .word       0x75206F74                   # INVALID     $t1, $zero, 0x6F74 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0840u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0840 raw=0x75206F74");
    // 0x5e0844: 0x74206573  .word       0x74206573                   # INVALID     $at, $zero, 0x6573 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0844u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0844 raw=0x74206573");
    // 0x5e0848: 0x20736968  addi        $s3, $v1, 0x6968
    ctx->pc = 0x5e0848u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26984, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
    // 0x5e084c: 0x636e7566  daddi       $t6, $k1, 0x7566
    ctx->pc = 0x5e084cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30054; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x5e0850: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x5e0850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x5e0854: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5e0854u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    // 0x5e0858: 0x0  nop
    ctx->pc = 0x5e0858u;
    // NOP
    // 0x5e085c: 0x0  nop
    ctx->pc = 0x5e085cu;
    // NOP
    // 0x5e0860: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0860u;
    {
        const bool branch_taken_0x5e0860 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0860) {
            ctx->pc = 0x5E0864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0860u;
            // 0x5e0864: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD9F4u;
            return;
        }
    }
    ctx->pc = 0x5E0868u;
    // 0x5e0868: 0x3a3a6432  xori        $k0, $s1, 0x6432
    ctx->pc = 0x5e0868u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25650);
    // 0x5e086c: 0x6c616353  ldr         $at, 0x6353($v1)
    ctx->pc = 0x5e086cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25427); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5e0870: 0x20292865  addi        $t1, $at, 0x2865
    ctx->pc = 0x5e0870u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)10341, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x5e0874: 0x203e2d2d  addi        $fp, $at, 0x2D2D
    ctx->pc = 0x5e0874u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11565, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
    // 0x5e0878: 0x65747461  daddiu      $s4, $t3, 0x7461
    ctx->pc = 0x5e0878u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29793);
    // 0x5e087c: 0x6974706d  ldl         $s4, 0x706D($t3)
    ctx->pc = 0x5e087cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28781); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x5e0880: 0x7420676e  .word       0x7420676E                   # INVALID     $at, $zero, 0x676E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0880u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0880 raw=0x7420676E");
    // 0x5e0884: 0x6f6d206f  ldr         $t5, 0x206F($k1)
    ctx->pc = 0x5e0884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x5e0888: 0x79666964  lq          $a2, 0x6964($t3)
    ctx->pc = 0x5e0888u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 11), 26980)));
label_5e088c:
    // 0x5e088c: 0x206e6120  addi        $t6, $v1, 0x6120
    ctx->pc = 0x5e088cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24864, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x5e0890: 0x656a626f  daddiu      $t2, $t3, 0x626F
    ctx->pc = 0x5e0890u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25199);
    // 0x5e0894: 0x6e207463  ldr         $zero, 0x7463($s1)
    ctx->pc = 0x5e0894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5e0898: 0x6320746f  daddi       $zero, $t9, 0x746F
    ctx->pc = 0x5e0898u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)29807; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5e089c: 0x74616572  .word       0x74616572                   # INVALID     $v1, $at, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e089cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E089C raw=0x74616572");
    // 0x5e08a0: 0x79206465  lq          $zero, 0x6465($t1)
    ctx->pc = 0x5e08a0u;
    SET_GPR_VEC(ctx, 0, READ128(ADD32(GPR_U32(ctx, 9), 25701)));
    // 0x5e08a4: 0xa7465  .word       0x000A7465                   # or          $t6, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5e08a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
    // 0x5e08a8: 0x0  nop
    ctx->pc = 0x5e08a8u;
    // NOP
    // 0x5e08ac: 0x0  nop
    ctx->pc = 0x5e08acu;
    // NOP
    // 0x5e08b0: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E08B0u;
    {
        const bool branch_taken_0x5e08b0 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e08b0) {
            ctx->pc = 0x5E08B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E08B0u;
            // 0x5e08b4: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FDA44u;
            return;
        }
    }
    ctx->pc = 0x5E08B8u;
    // 0x5e08b8: 0x3a3a6432  xori        $k0, $s1, 0x6432
    ctx->pc = 0x5e08b8u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25650);
    // 0x5e08bc: 0x65736552  daddiu      $s3, $t3, 0x6552
    ctx->pc = 0x5e08bcu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25938);
label_5e08c0:
    // 0x5e08c0: 0x4d544374  .word       0x4D544374                   # INVALID     $t2, $s4, 0x4374 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e08c0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5E08C0 raw=0x4D544374");
    // 0x5e08c4: 0x2d202928  sltiu       $zero, $t1, 0x2928
    ctx->pc = 0x5e08c4u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)10536) ? 1 : 0);
    // 0x5e08c8: 0x64203e2d  daddiu      $zero, $at, 0x3E2D
    ctx->pc = 0x5e08c8u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)15917);
    // 0x5e08cc: 0x74526774  .word       0x74526774                   # INVALID     $v0, $s2, 0x6774 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e08ccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E08CC raw=0x74526774");
    // 0x5e08d0: 0x73204432  .word       0x73204432                   # INVALID     $t9, $zero, 0x4432 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e08d0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5E08D0 raw=0x73204432");
    // 0x5e08d4: 0x6c756f68  ldr         $s5, 0x6F68($v1)
    ctx->pc = 0x5e08d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28520); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x5e08d8: 0x65622064  daddiu      $v0, $t3, 0x2064
    ctx->pc = 0x5e08d8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8292);
    // 0x5e08dc: 0x696e6920  ldl         $t6, 0x6920($t3)
    ctx->pc = 0x5e08dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26912); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x5e08e0: 0x6c616974  ldr         $at, 0x6974($v1)
    ctx->pc = 0x5e08e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5e08e4: 0x64657369  daddiu      $a1, $v1, 0x7369
    ctx->pc = 0x5e08e4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29545);
    // 0x5e08e8: 0x206e6920  addi        $t6, $v1, 0x6920
    ctx->pc = 0x5e08e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x5e08ec: 0x6564726f  daddiu      $a0, $t3, 0x726F
    ctx->pc = 0x5e08ecu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29295);
    // 0x5e08f0: 0x6f742072  ldr         $s4, 0x2072($k1)
    ctx->pc = 0x5e08f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x5e08f4: 0x65737520  daddiu      $s3, $t3, 0x7520
    ctx->pc = 0x5e08f4u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29984);
    // 0x5e08f8: 0x69687420  ldl         $t0, 0x7420($t3)
    ctx->pc = 0x5e08f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29728); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x5e08fc: 0x75662073  .word       0x75662073                   # INVALID     $t3, $a2, 0x2073 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e08fcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E08FC raw=0x75662073");
    // 0x5e0900: 0x6974636e  ldl         $s4, 0x636E($t3)
    ctx->pc = 0x5e0900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25454); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x5e0904: 0xa6e6f  .word       0x000A6E6F                   # dsubu       $t5, $zero, $t2 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5e0904u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 10));
    // 0x5e0908: 0x0  nop
    ctx->pc = 0x5e0908u;
    // NOP
    // 0x5e090c: 0x0  nop
    ctx->pc = 0x5e090cu;
    // NOP
    // 0x5e0910: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0910u;
    {
        const bool branch_taken_0x5e0910 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0910) {
            ctx->pc = 0x5E0914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0910u;
            // 0x5e0914: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FDAA4u;
            return;
        }
    }
    ctx->pc = 0x5E0918u;
    // 0x5e0918: 0x3a3a6432  xori        $k0, $s1, 0x6432
    ctx->pc = 0x5e0918u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25650);
    // 0x5e091c: 0x65736552  daddiu      $s3, $t3, 0x6552
    ctx->pc = 0x5e091cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25938);
label_5e0920:
    // 0x5e0920: 0x4d544374  .word       0x4D544374                   # INVALID     $t2, $s4, 0x4374 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0920u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5E0920 raw=0x4D544374");
    // 0x5e0924: 0x2d202928  sltiu       $zero, $t1, 0x2928
    ctx->pc = 0x5e0924u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)10536) ? 1 : 0);
    // 0x5e0928: 0x61203e2d  daddi       $zero, $t1, 0x3E2D
    ctx->pc = 0x5e0928u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)15917; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5e092c: 0x6d657474  ldr         $a1, 0x7474($t3)
    ctx->pc = 0x5e092cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29812); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x5e0930: 0x6e697470  ldr         $t1, 0x7470($s3)
    ctx->pc = 0x5e0930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29808); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5e0934: 0x6f742067  ldr         $s4, 0x2067($k1)
    ctx->pc = 0x5e0934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x5e0938: 0x646f6d20  daddiu      $t7, $v1, 0x6D20
    ctx->pc = 0x5e0938u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27936);
    // 0x5e093c: 0x20796669  addi        $t9, $v1, 0x6669
    ctx->pc = 0x5e093cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26217, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
    // 0x5e0940: 0x6f206e61  ldr         $zero, 0x6E61($t9)
    ctx->pc = 0x5e0940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5e0944: 0x63656a62  daddi       $a1, $k1, 0x6A62
    ctx->pc = 0x5e0944u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27234; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x5e0948: 0x6f6e2074  ldr         $t6, 0x2074($k1)
    ctx->pc = 0x5e0948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x5e094c: 0x72632074  .word       0x72632074                   # psllh       $a0, $v1, 1 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e094cu;
    SET_GPR_VEC(ctx, 4, _mm_slli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x5e0950: 0x65746165  daddiu      $s4, $t3, 0x6165
    ctx->pc = 0x5e0950u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24933);
    // 0x5e0954: 0x65792064  daddiu      $t9, $t3, 0x2064
    ctx->pc = 0x5e0954u;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8292);
    // 0x5e0958: 0xa74  teq         $zero, $zero, 41
    ctx->pc = 0x5e0958u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x5e095c: 0x0  nop
    ctx->pc = 0x5e095cu;
    // NOP
    // 0x5e0960: 0x0  nop
    ctx->pc = 0x5e0960u;
    // NOP
    // 0x5e0964: 0x0  nop
    ctx->pc = 0x5e0964u;
    // NOP
label_5e0968:
    // 0x5e0968: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0968u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x5e096c: 0x0  nop
    ctx->pc = 0x5e096cu;
    // NOP
    // 0x5e0970: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0970u;
    {
        const bool branch_taken_0x5e0970 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0970) {
            ctx->pc = 0x5E0974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0970u;
            // 0x5e0974: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FDB04u;
            return;
        }
    }
    ctx->pc = 0x5E0978u;
    // 0x5e0978: 0x3a3a6432  xori        $k0, $s1, 0x6432
    ctx->pc = 0x5e0978u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25650);
    // 0x5e097c: 0x61746f52  daddi       $s4, $t3, 0x6F52
    ctx->pc = 0x5e097cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28498; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x5e0980: 0x29286574  slti        $t0, $t1, 0x6574
    ctx->pc = 0x5e0980u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)25972) ? 1 : 0);
    // 0x5e0984: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0984u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
    // 0x5e0988: 0x67746420  daddiu      $s4, $k1, 0x6420
    ctx->pc = 0x5e0988u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25632);
    // 0x5e098c: 0x44327452  .word       0x44327452                   # dmfc1       $s2, $f14 # 00000452 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5e098cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x12 at 0x5E098C raw=0x44327452");
label_5e0990:
    // 0x5e0990: 0x6f687320  ldr         $t0, 0x7320($k1)
    ctx->pc = 0x5e0990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29472); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x5e0994: 0x20646c75  addi        $a0, $v1, 0x6C75
    ctx->pc = 0x5e0994u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27765, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5e0998: 0x69206562  ldl         $zero, 0x6562($t1)
    ctx->pc = 0x5e0998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25954); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
    // 0x5e099c: 0x6974696e  ldl         $s4, 0x696E($t3)
    ctx->pc = 0x5e099cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x5e09a0: 0x73696c61  .word       0x73696C61                   # maddu1      $t5, $k1, $t1 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e09a0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 9); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x5e09a4: 0x69206465  ldl         $zero, 0x6465($t1)
    ctx->pc = 0x5e09a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25701); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
    // 0x5e09a8: 0x726f206e  .word       0x726F206E                   # INVALID     $s3, $t7, 0x206E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e09a8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5E09A8 raw=0x726F206E");
    // 0x5e09ac: 0x20726564  addi        $s2, $v1, 0x6564
    ctx->pc = 0x5e09acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
    // 0x5e09b0: 0x75206f74  .word       0x75206F74                   # INVALID     $t1, $zero, 0x6F74 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e09b0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E09B0 raw=0x75206F74");
    // 0x5e09b4: 0x74206573  .word       0x74206573                   # INVALID     $at, $zero, 0x6573 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e09b4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E09B4 raw=0x74206573");
    // 0x5e09b8: 0x20736968  addi        $s3, $v1, 0x6968
    ctx->pc = 0x5e09b8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26984, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
    // 0x5e09bc: 0x636e7566  daddi       $t6, $k1, 0x7566
    ctx->pc = 0x5e09bcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30054; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x5e09c0: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x5e09c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x5e09c4: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5e09c4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    // 0x5e09c8: 0x0  nop
    ctx->pc = 0x5e09c8u;
    // NOP
    // 0x5e09cc: 0x0  nop
    ctx->pc = 0x5e09ccu;
    // NOP
    // 0x5e09d0: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E09D0u;
    {
        const bool branch_taken_0x5e09d0 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e09d0) {
            ctx->pc = 0x5E09D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E09D0u;
            // 0x5e09d4: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FDB64u;
            return;
        }
    }
    ctx->pc = 0x5E09D8u;
    // 0x5e09d8: 0x3a3a6432  xori        $k0, $s1, 0x6432
    ctx->pc = 0x5e09d8u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25650);
    // 0x5e09dc: 0x61746f52  daddi       $s4, $t3, 0x6F52
    ctx->pc = 0x5e09dcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28498; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x5e09e0: 0x29286574  slti        $t0, $t1, 0x6574
    ctx->pc = 0x5e09e0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)25972) ? 1 : 0);
    // 0x5e09e4: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e09e4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
    // 0x5e09e8: 0x74746120  .word       0x74746120                   # INVALID     $v1, $s4, 0x6120 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e09e8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E09E8 raw=0x74746120");
    // 0x5e09ec: 0x74706d65  .word       0x74706D65                   # INVALID     $v1, $s0, 0x6D65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e09ecu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E09EC raw=0x74706D65");
    // 0x5e09f0: 0x20676e69  addi        $a3, $v1, 0x6E69
    ctx->pc = 0x5e09f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28265, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x5e09f4: 0x6d206f74  ldr         $zero, 0x6F74($t1)
    ctx->pc = 0x5e09f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28532); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5e09f8: 0x6669646f  daddiu      $t1, $s3, 0x646F
    ctx->pc = 0x5e09f8u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25711);
    // 0x5e09fc: 0x6e612079  ldr         $at, 0x2079($s3)
    ctx->pc = 0x5e09fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8313); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5e0a00: 0x6a626f20  ldl         $v0, 0x6F20($s3)
    ctx->pc = 0x5e0a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x5e0a04: 0x20746365  addi        $s4, $v1, 0x6365
    ctx->pc = 0x5e0a04u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25445, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x5e0a08: 0x20746f6e  addi        $s4, $v1, 0x6F6E
    ctx->pc = 0x5e0a08u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28526, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x5e0a0c: 0x61657263  daddi       $a1, $t3, 0x7263
    ctx->pc = 0x5e0a0cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29283; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x5e0a10: 0x20646574  addi        $a0, $v1, 0x6574
    ctx->pc = 0x5e0a10u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25972, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5e0a14: 0xa746579  j           func_9D195E4
    ctx->pc = 0x5E0A14u;
    ctx->pc = 0x9D195E4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9D195E4u, 0x5E0A14u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5E0A1Cu;
    // 0x5e0a1c: 0x0  nop
    ctx->pc = 0x5e0a1cu;
    // NOP
    // 0x5e0a20: 0x64327670  daddiu      $s2, $at, 0x7670
    ctx->pc = 0x5e0a20u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)30320);
    // 0x5e0a24: 0x6f766950  ldr         $s6, 0x6950($k1)
    ctx->pc = 0x5e0a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26960); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem >> shift)); }
    // 0x5e0a28: 0x4e3d2174  .word       0x4E3D2174                   # INVALID     $s1, $sp, 0x2174 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0a28u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5E0A28 raw=0x4E3D2174");
    // 0x5e0a2c: 0x4c4c55  .word       0x004C4C55                   # INVALID     $v0, $t4, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5e0a2cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5E0A2C raw=0x004C4C55");
    // 0x5e0a30: 0x42705f6d  .word       0x42705F6D                   # INVALID     $s3, $s0, 0x5F6D # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5e0a30u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x5E0A30 raw=0x42705F6D");
    // 0x5e0a34: 0x68737572  ldl         $s3, 0x7572($v1)
    ctx->pc = 0x5e0a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30066); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x5e0a38: 0x20262620  addi        $a2, $at, 0x2620
    ctx->pc = 0x5e0a38u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)9760, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x5e0a3c: 0x705f6d21  .word       0x705F6D21                   # maddu1      $t5, $v0, $ra # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0a3cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 31); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x5e0a40: 0x73757242  .word       0x73757242                   # INVALID     $k1, $s5, 0x7242 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0a40u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x5e0a44: 0x493e2d68  .word       0x493E2D68                   # INVALID     $t1, $fp, 0x2D68 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5e0a44u;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5E0A44 raw=0x493E2D68");
    // 0x5e0a48: 0x72694473  .word       0x72694473                   # INVALID     $s3, $t1, 0x4473 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0a48u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x5E0A48 raw=0x72694473");
    // 0x5e0a4c: 0x29287974  slti        $t0, $t1, 0x7974
    ctx->pc = 0x5e0a4cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)31092) ? 1 : 0);
    // 0x5e0a50: 0x0  nop
    ctx->pc = 0x5e0a50u;
    // NOP
    // 0x5e0a54: 0x0  nop
    ctx->pc = 0x5e0a54u;
    // NOP
    // 0x5e0a58: 0x0  nop
    ctx->pc = 0x5e0a58u;
    // NOP
    // 0x5e0a5c: 0x0  nop
    ctx->pc = 0x5e0a5cu;
    // NOP
    // 0x5e0a60: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0A60u;
    {
        const bool branch_taken_0x5e0a60 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0a60) {
            ctx->pc = 0x5E0A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0A60u;
            // 0x5e0a64: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FDBF4u;
            return;
        }
    }
    ctx->pc = 0x5E0A68u;
    // 0x5e0a68: 0x3a3a6432  xori        $k0, $s1, 0x6432
    ctx->pc = 0x5e0a68u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25650);
    // 0x5e0a6c: 0x646e6552  daddiu      $t6, $v1, 0x6552
    ctx->pc = 0x5e0a6cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25938);
    // 0x5e0a70: 0x29287265  slti        $t0, $t1, 0x7265
    ctx->pc = 0x5e0a70u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)29285) ? 1 : 0);
    // 0x5e0a74: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0a74u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
    // 0x5e0a78: 0x75724220  .word       0x75724220                   # INVALID     $t3, $s2, 0x4220 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0a78u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0A78 raw=0x75724220");
    // 0x5e0a7c: 0x69206873  ldl         $zero, 0x6873($t1)
    ctx->pc = 0x5e0a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 26739); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
    // 0x5e0a80: 0x69652073  ldl         $a1, 0x2073($t3)
    ctx->pc = 0x5e0a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x5e0a84: 0x72656874  .word       0x72656874                   # psllh       $t5, $a1, 1 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0a84u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 5), 1));
    // 0x5e0a88: 0x4c554e20  .word       0x4C554E20                   # INVALID     $v0, $s5, 0x4E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0a88u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5E0A88 raw=0x4C554E20");
    // 0x5e0a8c: 0x726f206c  .word       0x726F206C                   # INVALID     $s3, $t7, 0x206C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0a8cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x5E0A8C raw=0x726F206C");
    // 0x5e0a90: 0x73616820  madd1       $t5, $k1, $at
    ctx->pc = 0x5e0a90u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x5e0a94: 0x65656220  daddiu      $a1, $t3, 0x6220
    ctx->pc = 0x5e0a94u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25120);
    // 0x5e0a98: 0x6e69206e  ldr         $t1, 0x206E($s3)
    ctx->pc = 0x5e0a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5e0a9c: 0x696c6176  ldl         $t4, 0x6176($t3)
    ctx->pc = 0x5e0a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24950); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x5e0aa0: 0x65746164  daddiu      $s4, $t3, 0x6164
    ctx->pc = 0x5e0aa0u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24932);
    // 0x5e0aa4: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5e0aa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x5e0aa8: 0x0  nop
    ctx->pc = 0x5e0aa8u;
    // NOP
    // 0x5e0aac: 0x0  nop
    ctx->pc = 0x5e0aacu;
    // NOP
    // 0x5e0ab0: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0AB0u;
    {
        const bool branch_taken_0x5e0ab0 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0ab0) {
            ctx->pc = 0x5E0AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0AB0u;
            // 0x5e0ab4: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FDC44u;
            return;
        }
    }
    ctx->pc = 0x5E0AB8u;
    // 0x5e0ab8: 0x3a3a6432  xori        $k0, $s1, 0x6432
    ctx->pc = 0x5e0ab8u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25650);
    // 0x5e0abc: 0x646e6552  daddiu      $t6, $v1, 0x6552
    ctx->pc = 0x5e0abcu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25938);
    // 0x5e0ac0: 0x2d207265  sltiu       $zero, $t1, 0x7265
    ctx->pc = 0x5e0ac0u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)29285) ? 1 : 0);
    // 0x5e0ac4: 0x6d203e2d  ldr         $zero, 0x3E2D($t1)
    ctx->pc = 0x5e0ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15917); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5e0ac8: 0x624f705f  daddi       $t7, $s2, 0x705F
    ctx->pc = 0x5e0ac8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 18); int64_t imm = (int64_t)(int32_t)28767; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
    // 0x5e0acc: 0x7463656a  .word       0x7463656A                   # INVALID     $v1, $v1, 0x656A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0accu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0ACC raw=0x7463656A");
    // 0x5e0ad0: 0x6f687320  ldr         $t0, 0x7320($k1)
    ctx->pc = 0x5e0ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29472); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x5e0ad4: 0x20646c75  addi        $a0, $v1, 0x6C75
    ctx->pc = 0x5e0ad4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27765, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5e0ad8: 0x4e206562  .word       0x4E206562                   # INVALID     $s1, $zero, 0x6562 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0ad8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5E0AD8 raw=0x4E206562");
    // 0x5e0adc: 0xa4c4c55  j           func_9313154
    ctx->pc = 0x5E0ADCu;
    ctx->pc = 0x9313154u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9313154u, 0x5E0ADCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5E0AE4u;
    // 0x5e0ae4: 0x0  nop
    ctx->pc = 0x5e0ae4u;
    // NOP
    // 0x5e0ae8: 0x0  nop
    ctx->pc = 0x5e0ae8u;
    // NOP
    // 0x5e0aec: 0x0  nop
    ctx->pc = 0x5e0aecu;
    // NOP
    ctx->pc = 0x5e0af0u;
}
