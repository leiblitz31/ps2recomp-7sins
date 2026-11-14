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

// Function: sub_005F9BF0
// Address: 0x5f9bf0 - 0x5f9ed0
void sub_005F9BF0_0x5f9bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005F9BF0_0x5f9bf0");
#endif

    switch (ctx->pc) {
        case 0x5f9c3cu: goto label_5f9c3c;
        case 0x5f9c68u: goto label_5f9c68;
        case 0x5f9c8cu: goto label_5f9c8c;
        case 0x5f9dc8u: goto label_5f9dc8;
        case 0x5f9e68u: goto label_5f9e68;
        default: break;
    }

    ctx->pc = 0x5f9bf0u;

    // 0x5f9bf0: 0x6b736944  ldl         $s3, 0x6944($k1)
    ctx->pc = 0x5f9bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x5f9bf4: 0x64616552  daddiu      $at, $v1, 0x6552
    ctx->pc = 0x5f9bf4u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25938);
    // 0x5f9bf8: 0x6e652079  ldr         $a1, 0x2079($s3)
    ctx->pc = 0x5f9bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8313); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x5f9bfc: 0xa646564  j           func_9919590
    ctx->pc = 0x5F9BFCu;
    ctx->pc = 0x9919590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9919590u, 0x5F9BFCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5F9C04u;
    // 0x5f9c04: 0x0  nop
    ctx->pc = 0x5f9c04u;
    // NOP
    // 0x5f9c08: 0x2057454e  addi        $s7, $v0, 0x454E
    ctx->pc = 0x5f9c08u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)17742, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
    // 0x5f9c0c: 0x6b736944  ldl         $s3, 0x6944($k1)
    ctx->pc = 0x5f9c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x5f9c10: 0x64616552  daddiu      $at, $v1, 0x6552
    ctx->pc = 0x5f9c10u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25938);
    // 0x5f9c14: 0x61432079  daddi       $v1, $t2, 0x2079
    ctx->pc = 0x5f9c14u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8313; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
    // 0x5f9c18: 0xa6c6c  .word       0x000A6C6C                   # dadd        $t5, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f9c18u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 10); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
    // 0x5f9c1c: 0x0  nop
    ctx->pc = 0x5f9c1cu;
    // NOP
    // 0x5f9c20: 0x43656373  .word       0x43656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f9c20u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x5F9C20 raw=0x43656373");
    // 0x5f9c24: 0x67684364  daddiu      $t0, $k1, 0x4364
    ctx->pc = 0x5f9c24u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)17252);
    // 0x5f9c28: 0x3a737953  xori        $s3, $s3, 0x7953
    ctx->pc = 0x5f9c28u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)31059);
    // 0x5f9c2c: 0x6c6c4920  ldr         $t4, 0x4920($v1)
    ctx->pc = 0x5f9c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 18720); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x5f9c30: 0x6c616765  ldr         $at, 0x6765($v1)
    ctx->pc = 0x5f9c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26469); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5f9c34: 0x6e75665f  ldr         $s5, 0x665F($s3)
    ctx->pc = 0x5f9c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x5f9c38: 0x6f697463  ldr         $t1, 0x7463($k1)
    ctx->pc = 0x5f9c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5f9c3c:
    // 0x5f9c3c: 0x61635f6e  daddi       $v1, $t3, 0x5F6E
    ctx->pc = 0x5f9c3cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24430; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
    // 0x5f9c40: 0xa6c6c  .word       0x000A6C6C                   # dadd        $t5, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f9c40u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 10); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
    // 0x5f9c44: 0x0  nop
    ctx->pc = 0x5f9c44u;
    // NOP
    // 0x5f9c48: 0x6462696c  daddiu      $v0, $v1, 0x696C
    ctx->pc = 0x5f9c48u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26988);
    // 0x5f9c4c: 0x203a6362  addi        $k0, $at, 0x6362
    ctx->pc = 0x5f9c4cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25442, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x5f9c50: 0x646e6962  daddiu      $t6, $v1, 0x6962
    ctx->pc = 0x5f9c50u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26978);
    // 0x5f9c54: 0x69616620  ldl         $at, 0x6620($t3)
    ctx->pc = 0x5f9c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
    // 0x5f9c58: 0xa64656c  j           func_99195B0
    ctx->pc = 0x5F9C58u;
    ctx->pc = 0x99195B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x99195B0u, 0x5F9C58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5F9C60u;
    // 0x5f9c60: 0x6462696c  daddiu      $v0, $v1, 0x696C
    ctx->pc = 0x5f9c60u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26988);
    // 0x5f9c64: 0x203a6362  addi        $k0, $at, 0x6362
    ctx->pc = 0x5f9c64u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25442, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_5f9c68:
    // 0x5f9c68: 0x75646f4d  .word       0x75646F4D                   # INVALID     $t3, $a0, 0x6F4D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f9c68u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F9C68 raw=0x75646F4D");
    // 0x5f9c6c: 0x7620656c  .word       0x7620656C                   # INVALID     $s1, $zero, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f9c6cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F9C6C raw=0x7620656C");
    // 0x5f9c70: 0x69737265  ldl         $s3, 0x7265($t3)
    ctx->pc = 0x5f9c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x5f9c74: 0x6d206e6f  ldr         $zero, 0x6E6F($t1)
    ctx->pc = 0x5f9c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5f9c78: 0x616d7369  daddi       $t5, $t3, 0x7369
    ctx->pc = 0x5f9c78u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29545; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
    // 0x5f9c7c: 0x20686374  addi        $t0, $v1, 0x6374
    ctx->pc = 0x5f9c7cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25460, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x5f9c80: 0x0  nop
    ctx->pc = 0x5f9c80u;
    // NOP
    // 0x5f9c84: 0x0  nop
    ctx->pc = 0x5f9c84u;
    // NOP
    // 0x5f9c88: 0x62696c5b  daddi       $t1, $s3, 0x6C5B
    ctx->pc = 0x5f9c88u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)27739; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_5f9c8c:
    // 0x5f9c8c: 0x2e636264  sltiu       $v1, $s3, 0x6264
    ctx->pc = 0x5f9c8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25188) ? 1 : 0);
    // 0x5f9c90: 0x203d2061  addi        $sp, $at, 0x2061
    ctx->pc = 0x5f9c90u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8289, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
    // 0x5f9c94: 0x252e6425  addiu       $t6, $t1, 0x6425
    ctx->pc = 0x5f9c94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
    // 0x5f9c98: 0x2c783230  sltiu       $t8, $v1, 0x3230
    ctx->pc = 0x5f9c98u;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12848) ? 1 : 0);
    // 0x5f9c9c: 0x63626420  daddi       $v0, $k1, 0x6420
    ctx->pc = 0x5f9c9cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25632; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
    // 0x5f9ca0: 0x2e6e616d  sltiu       $t6, $s3, 0x616D
    ctx->pc = 0x5f9ca0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24941) ? 1 : 0);
    // 0x5f9ca4: 0x20787269  addi        $t8, $v1, 0x7269
    ctx->pc = 0x5f9ca4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29289, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x5f9ca8: 0x6425203d  daddiu      $a1, $at, 0x203D
    ctx->pc = 0x5f9ca8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)8253);
    // 0x5f9cac: 0x3230252e  andi        $s0, $s1, 0x252E
    ctx->pc = 0x5f9cacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9518);
    // 0x5f9cb0: 0xa5d78  dsll        $t3, $t2, 21
    ctx->pc = 0x5f9cb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) << 21);
    // 0x5f9cb4: 0x0  nop
    ctx->pc = 0x5f9cb4u;
    // NOP
    // 0x5f9cb8: 0x44656373  .word       0x44656373                   # INVALID     $v1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f9cb8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x33 at 0x5F9CB8 raw=0x44656373");
    // 0x5f9cbc: 0x735f6362  .word       0x735F6362                   # INVALID     $k0, $ra, 0x6362 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f9cbcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x5F9CBC raw=0x735F6362");
    // 0x5f9cc0: 0x616d65  .word       0x00616D65                   # or          $t5, $v1, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f9cc0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | GPR_U64(ctx, 1));
    // 0x5f9cc4: 0x0  nop
    ctx->pc = 0x5f9cc4u;
    // NOP
    // 0x5f9cc8: 0x6462696c  daddiu      $v0, $v1, 0x696C
    ctx->pc = 0x5f9cc8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26988);
    // 0x5f9ccc: 0x203a6362  addi        $k0, $at, 0x6362
    ctx->pc = 0x5f9cccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25442, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x5f9cd0: 0x44666953  .word       0x44666953                   # INVALID     $v1, $a2, 0x6953 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f9cd0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x13 at 0x5F9CD0 raw=0x44666953");
    // 0x5f9cd4: 0x6441616d  daddiu      $at, $v0, 0x616D
    ctx->pc = 0x5f9cd4u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)24941);
    // 0x5f9cd8: 0x25207264  addiu       $zero, $t1, 0x7264
    ctx->pc = 0x5f9cd8u;
    // NOP (addiu $zero, ...)
    // 0x5f9cdc: 0xa783830  j           func_9E0E0C0
    ctx->pc = 0x5F9CDCu;
    ctx->pc = 0x9E0E0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9E0E0C0u, 0x5F9CDCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5F9CE4u;
    // 0x5f9ce4: 0x0  nop
    ctx->pc = 0x5f9ce4u;
    // NOP
    // 0x5f9ce8: 0x44656373  .word       0x44656373                   # INVALID     $v1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f9ce8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x33 at 0x5F9CE8 raw=0x44656373");
    // 0x5f9cec: 0x65536362  daddiu      $s3, $t2, 0x6362
    ctx->pc = 0x5f9cecu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25442);
    // 0x5f9cf0: 0x726f5774  .word       0x726F5774                   # psllh       $t2, $t7, 29 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f9cf0u;
    SET_GPR_VEC(ctx, 10, _mm_slli_epi16(GPR_VEC(ctx, 15), 29));
    // 0x5f9cf4: 0x6464416b  daddiu      $a0, $v1, 0x416B
    ctx->pc = 0x5f9cf4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)16747);
    // 0x5f9cf8: 0x72203a72  .word       0x72203A72                   # INVALID     $s1, $zero, 0x3A72 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f9cf8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5F9CF8 raw=0x72203A72");
    // 0x5f9cfc: 0x65206370  daddiu      $zero, $t1, 0x6370
    ctx->pc = 0x5f9cfcu;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)25456);
    // 0x5f9d00: 0x726f7272  .word       0x726F7272                   # INVALID     $s3, $t7, 0x7272 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f9d00u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5F9D00 raw=0x726F7272");
    // 0x5f9d04: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5f9d04u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    // 0x5f9d08: 0x44656373  .word       0x44656373                   # INVALID     $v1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f9d08u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x33 at 0x5F9D08 raw=0x44656373");
    // 0x5f9d0c: 0x72436362  .word       0x72436362                   # INVALID     $s2, $v1, 0x6362 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f9d0cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x5F9D0C raw=0x72436362");
    // 0x5f9d10: 0x65746165  daddiu      $s4, $t3, 0x6165
    ctx->pc = 0x5f9d10u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24933);
    // 0x5f9d14: 0x6b636f53  ldl         $v1, 0x6F53($k1)
    ctx->pc = 0x5f9d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28499); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x5f9d18: 0x203a7465  addi        $k0, $at, 0x7465
    ctx->pc = 0x5f9d18u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29797, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x5f9d1c: 0x20637072  addi        $v1, $v1, 0x7072
    ctx->pc = 0x5f9d1cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28786, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x5f9d20: 0x6f727265  ldr         $s2, 0x7265($k1)
    ctx->pc = 0x5f9d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x5f9d24: 0xa72  tlt         $zero, $zero, 41
    ctx->pc = 0x5f9d24u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x5f9d28: 0x44656373  .word       0x44656373                   # INVALID     $v1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f9d28u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x33 at 0x5F9D28 raw=0x44656373");
    // 0x5f9d2c: 0x65446362  daddiu      $a0, $t2, 0x6362
    ctx->pc = 0x5f9d2cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25442);
    // 0x5f9d30: 0x6574656c  daddiu      $s4, $t3, 0x656C
    ctx->pc = 0x5f9d30u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
    // 0x5f9d34: 0x6b636f53  ldl         $v1, 0x6F53($k1)
    ctx->pc = 0x5f9d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28499); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x5f9d38: 0x203a7465  addi        $k0, $at, 0x7465
    ctx->pc = 0x5f9d38u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29797, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x5f9d3c: 0x20637072  addi        $v1, $v1, 0x7072
    ctx->pc = 0x5f9d3cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28786, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x5f9d40: 0x6f727265  ldr         $s2, 0x7265($k1)
    ctx->pc = 0x5f9d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x5f9d44: 0xa72  tlt         $zero, $zero, 41
    ctx->pc = 0x5f9d44u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x5f9d48: 0x44656373  .word       0x44656373                   # INVALID     $v1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f9d48u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x33 at 0x5F9D48 raw=0x44656373");
    // 0x5f9d4c: 0x65476362  daddiu      $a3, $t2, 0x6362
    ctx->pc = 0x5f9d4cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25442);
    // 0x5f9d50: 0x70654474  .word       0x70654474                   # psllh       $t0, $a1, 17 # 00600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f9d50u;
    SET_GPR_VEC(ctx, 8, _mm_slli_epi16(GPR_VEC(ctx, 5), 17));
    // 0x5f9d54: 0x626d754e  daddi       $t5, $s3, 0x754E
    ctx->pc = 0x5f9d54u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)30030; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
    // 0x5f9d58: 0x203a7265  addi        $k0, $at, 0x7265
    ctx->pc = 0x5f9d58u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29285, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x5f9d5c: 0x20637072  addi        $v1, $v1, 0x7072
    ctx->pc = 0x5f9d5cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28786, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x5f9d60: 0x6f727265  ldr         $s2, 0x7265($k1)
    ctx->pc = 0x5f9d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x5f9d64: 0xa72  tlt         $zero, $zero, 41
    ctx->pc = 0x5f9d64u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x5f9d68: 0x44656373  .word       0x44656373                   # INVALID     $v1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f9d68u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x33 at 0x5F9D68 raw=0x44656373");
    // 0x5f9d6c: 0x6e496362  ldr         $t1, 0x6362($s2)
    ctx->pc = 0x5f9d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 25442); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5f9d70: 0x6f537469  ldr         $s3, 0x7469($k0)
    ctx->pc = 0x5f9d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 29801); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
    // 0x5f9d74: 0x74656b63  .word       0x74656B63                   # INVALID     $v1, $a1, 0x6B63 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f9d74u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F9D74 raw=0x74656B63");
    // 0x5f9d78: 0x7072203a  .word       0x7072203A                   # INVALID     $v1, $s2, 0x203A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f9d78u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x3A at 0x5F9D78 raw=0x7072203A");
    // 0x5f9d7c: 0x72652063  .word       0x72652063                   # INVALID     $s3, $a1, 0x2063 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f9d7cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x5F9D7C raw=0x72652063");
    // 0x5f9d80: 0xa726f72  j           func_9C9BDC8
    ctx->pc = 0x5F9D80u;
    ctx->pc = 0x9C9BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9C9BDC8u, 0x5F9D80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5F9D88u;
    // 0x5f9d88: 0x44656373  .word       0x44656373                   # INVALID     $v1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f9d88u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x33 at 0x5F9D88 raw=0x44656373");
    // 0x5f9d8c: 0x65526362  daddiu      $s2, $t2, 0x6362
    ctx->pc = 0x5f9d8cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25442);
    // 0x5f9d90: 0x53746573  beql        $k1, $s4, . + 4 + (0x6573 << 2)
    ctx->pc = 0x5F9D90u;
    {
        const bool branch_taken_0x5f9d90 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 20));
        if (branch_taken_0x5f9d90) {
            ctx->pc = 0x5F9D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F9D90u;
            // 0x5f9d94: 0x656b636f  daddiu      $t3, $t3, 0x636F (Delay Slot)
            SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25455);
            ctx->in_delay_slot = false;
            ctx->pc = 0x613360u;
            return;
        }
    }
    ctx->pc = 0x5F9D98u;
    // 0x5f9d98: 0x72203a74  .word       0x72203A74                   # psllh       $a3, $zero, 9 # 02200000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f9d98u;
    SET_GPR_VEC(ctx, 7, _mm_slli_epi16(GPR_VEC(ctx, 0), 9));
    // 0x5f9d9c: 0x65206370  daddiu      $zero, $t1, 0x6370
    ctx->pc = 0x5f9d9cu;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)25456);
    // 0x5f9da0: 0x726f7272  .word       0x726F7272                   # INVALID     $s3, $t7, 0x7272 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f9da0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5F9DA0 raw=0x726F7272");
    // 0x5f9da4: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5f9da4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    // 0x5f9da8: 0x44656373  .word       0x44656373                   # INVALID     $v1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f9da8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x33 at 0x5F9DA8 raw=0x44656373");
    // 0x5f9dac: 0x65476362  daddiu      $a3, $t2, 0x6362
    ctx->pc = 0x5f9dacu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25442);
    // 0x5f9db0: 0x76654474  .word       0x76654474                   # INVALID     $s3, $a1, 0x4474 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f9db0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F9DB0 raw=0x76654474");
    // 0x5f9db4: 0x53656369  beql        $k1, $a1, . + 4 + (0x6369 << 2)
    ctx->pc = 0x5F9DB4u;
    {
        const bool branch_taken_0x5f9db4 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 5));
        if (branch_taken_0x5f9db4) {
            ctx->pc = 0x5F9DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F9DB4u;
            // 0x5f9db8: 0x75746174  .word       0x75746174                   # INVALID     $t3, $s4, 0x6174 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F9DB8 raw=0x75746174");
            ctx->in_delay_slot = false;
            ctx->pc = 0x612B5Cu;
            return;
        }
    }
    ctx->pc = 0x5F9DBCu;
    // 0x5f9dbc: 0x72203a73  .word       0x72203A73                   # INVALID     $s1, $zero, 0x3A73 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f9dbcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x5F9DBC raw=0x72203A73");
    // 0x5f9dc0: 0x65206370  daddiu      $zero, $t1, 0x6370
    ctx->pc = 0x5f9dc0u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)25456);
    // 0x5f9dc4: 0x726f7272  .word       0x726F7272                   # INVALID     $s3, $t7, 0x7272 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f9dc4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5F9DC4 raw=0x726F7272");
label_5f9dc8:
    // 0x5f9dc8: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5f9dc8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    // 0x5f9dcc: 0x0  nop
    ctx->pc = 0x5f9dccu;
    // NOP
    // 0x5f9dd0: 0x44656373  .word       0x44656373                   # INVALID     $v1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f9dd0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x33 at 0x5F9DD0 raw=0x44656373");
    // 0x5f9dd4: 0x52536362  beql        $s2, $s3, . + 4 + (0x6362 << 2)
    ctx->pc = 0x5F9DD4u;
    {
        const bool branch_taken_0x5f9dd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        if (branch_taken_0x5f9dd4) {
            ctx->pc = 0x5F9DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F9DD4u;
            // 0x5f9dd8: 0x61746144  daddi       $s4, $t3, 0x6144 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24900; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x612B60u;
            return;
        }
    }
    ctx->pc = 0x5F9DDCu;
    // 0x5f9ddc: 0x7072203a  .word       0x7072203A                   # INVALID     $v1, $s2, 0x203A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f9ddcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x3A at 0x5F9DDC raw=0x7072203A");
    // 0x5f9de0: 0x72652063  .word       0x72652063                   # INVALID     $s3, $a1, 0x2063 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f9de0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x5F9DE0 raw=0x72652063");
    // 0x5f9de4: 0xa726f72  j           func_9C9BDC8
    ctx->pc = 0x5F9DE4u;
    ctx->pc = 0x9C9BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9C9BDC8u, 0x5F9DE4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5F9DECu;
    // 0x5f9dec: 0x0  nop
    ctx->pc = 0x5f9decu;
    // NOP
    // 0x5f9df0: 0x44656373  .word       0x44656373                   # INVALID     $v1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f9df0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x33 at 0x5F9DF0 raw=0x44656373");
    // 0x5f9df4: 0x65536362  daddiu      $s3, $t2, 0x6362
    ctx->pc = 0x5f9df4u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25442);
    // 0x5f9df8: 0x6144646e  daddi       $a0, $t2, 0x646E
    ctx->pc = 0x5f9df8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)25710; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, res); }
    // 0x5f9dfc: 0x203a6174  addi        $k0, $at, 0x6174
    ctx->pc = 0x5f9dfcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)24948, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x5f9e00: 0x20637072  addi        $v1, $v1, 0x7072
    ctx->pc = 0x5f9e00u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28786, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x5f9e04: 0x6f727265  ldr         $s2, 0x7265($k1)
    ctx->pc = 0x5f9e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x5f9e08: 0xa72  tlt         $zero, $zero, 41
    ctx->pc = 0x5f9e08u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x5f9e0c: 0x0  nop
    ctx->pc = 0x5f9e0cu;
    // NOP
    // 0x5f9e10: 0x6462696c  daddiu      $v0, $v1, 0x696C
    ctx->pc = 0x5f9e10u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26988);
    // 0x5f9e14: 0x203a6362  addi        $k0, $at, 0x6362
    ctx->pc = 0x5f9e14u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25442, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x5f9e18: 0x646e6553  daddiu      $t6, $v1, 0x6553
    ctx->pc = 0x5f9e18u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25939);
    // 0x5f9e1c: 0x61746144  daddi       $s4, $t3, 0x6144
    ctx->pc = 0x5f9e1cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24900; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x5f9e20: 0x61642032  daddi       $a0, $t3, 0x2032
    ctx->pc = 0x5f9e20u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8242; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, res); }
    // 0x5f9e24: 0x6c206174  ldr         $zero, 0x6174($at)
    ctx->pc = 0x5f9e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5f9e28: 0x74676e65  .word       0x74676E65                   # INVALID     $v1, $a3, 0x6E65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f9e28u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F9E28 raw=0x74676E65");
    // 0x5f9e2c: 0x6f742068  ldr         $s4, 0x2068($k1)
    ctx->pc = 0x5f9e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x5f9e30: 0x6f6c206f  ldr         $t4, 0x206F($k1)
    ctx->pc = 0x5f9e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x5f9e34: 0x5b20676e  blezl       $t9, . + 4 + (0x676E << 2)
    ctx->pc = 0x5F9E34u;
    {
        const bool branch_taken_0x5f9e34 = (GPR_S32(ctx, 25) <= 0);
        if (branch_taken_0x5f9e34) {
            ctx->pc = 0x5F9E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F9E34u;
            // 0x5f9e38: 0xa5d6425  j           func_9759094 (Delay Slot)
            // J 0x9759094 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x613BF0u;
            return;
        }
    }
    ctx->pc = 0x5F9E3Cu;
    // 0x5f9e3c: 0x0  nop
    ctx->pc = 0x5f9e3cu;
    // NOP
    // 0x5f9e40: 0x6d636264  ldr         $v1, 0x6264($t3)
    ctx->pc = 0x5f9e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25188); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x5f9e44: 0x3a206e61  xori        $zero, $s1, 0x6E61
    ctx->pc = 0x5f9e44u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)28257);
    // 0x5f9e48: 0x6e655320  ldr         $a1, 0x5320($s3)
    ctx->pc = 0x5f9e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x5f9e4c: 0x74614464  .word       0x74614464                   # INVALID     $v1, $at, 0x4464 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f9e4cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F9E4C raw=0x74614464");
    // 0x5f9e50: 0x42203261  .word       0x42203261                   # INVALID     $s1, $zero, 0x3261 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f9e50u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x5F9E50 raw=0x42203261");
    // 0x5f9e54: 0xa595355  j           func_9654D54
    ctx->pc = 0x5F9E54u;
    ctx->pc = 0x9654D54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9654D54u, 0x5F9E54u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5F9E5Cu;
    // 0x5f9e5c: 0x0  nop
    ctx->pc = 0x5f9e5cu;
    // NOP
    // 0x5f9e60: 0x44656373  .word       0x44656373                   # INVALID     $v1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f9e60u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x33 at 0x5F9E60 raw=0x44656373");
    // 0x5f9e64: 0x65536362  daddiu      $s3, $t2, 0x6362
    ctx->pc = 0x5f9e64u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25442);
label_5f9e68:
    // 0x5f9e68: 0x6144646e  daddi       $a0, $t2, 0x646E
    ctx->pc = 0x5f9e68u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)25710; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, res); }
    // 0x5f9e6c: 0x3a326174  xori        $s2, $s1, 0x6174
    ctx->pc = 0x5f9e6cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)24948);
    // 0x5f9e70: 0x63707220  daddi       $s0, $k1, 0x7220
    ctx->pc = 0x5f9e70u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29216; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
    // 0x5f9e74: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f9e74u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x5f9e78: 0xa726f  .word       0x000A726F                   # dsubu       $t6, $zero, $t2 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f9e78u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 10));
    // 0x5f9e7c: 0x0  nop
    ctx->pc = 0x5f9e7cu;
    // NOP
    // 0x5f9e80: 0x6462696c  daddiu      $v0, $v1, 0x696C
    ctx->pc = 0x5f9e80u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26988);
    // 0x5f9e84: 0x203a6362  addi        $k0, $at, 0x6362
    ctx->pc = 0x5f9e84u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25442, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x5f9e88: 0x646e6553  daddiu      $t6, $v1, 0x6553
    ctx->pc = 0x5f9e88u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25939);
    // 0x5f9e8c: 0x61746144  daddi       $s4, $t3, 0x6144
    ctx->pc = 0x5f9e8cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24900; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x5f9e90: 0x61642033  daddi       $a0, $t3, 0x2033
    ctx->pc = 0x5f9e90u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8243; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, res); }
    // 0x5f9e94: 0x6c206174  ldr         $zero, 0x6174($at)
    ctx->pc = 0x5f9e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5f9e98: 0x74676e65  .word       0x74676E65                   # INVALID     $v1, $a3, 0x6E65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f9e98u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F9E98 raw=0x74676E65");
    // 0x5f9e9c: 0x6f742068  ldr         $s4, 0x2068($k1)
    ctx->pc = 0x5f9e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x5f9ea0: 0x6f6c206f  ldr         $t4, 0x206F($k1)
    ctx->pc = 0x5f9ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x5f9ea4: 0x5b20676e  blezl       $t9, . + 4 + (0x676E << 2)
    ctx->pc = 0x5F9EA4u;
    {
        const bool branch_taken_0x5f9ea4 = (GPR_S32(ctx, 25) <= 0);
        if (branch_taken_0x5f9ea4) {
            ctx->pc = 0x5F9EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F9EA4u;
            // 0x5f9ea8: 0xa5d6425  j           func_9759094 (Delay Slot)
            // J 0x9759094 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x613C60u;
            return;
        }
    }
    ctx->pc = 0x5F9EACu;
    // 0x5f9eac: 0x0  nop
    ctx->pc = 0x5f9eacu;
    // NOP
    // 0x5f9eb0: 0x6d636264  ldr         $v1, 0x6264($t3)
    ctx->pc = 0x5f9eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25188); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x5f9eb4: 0x3a206e61  xori        $zero, $s1, 0x6E61
    ctx->pc = 0x5f9eb4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)28257);
    // 0x5f9eb8: 0x6e655320  ldr         $a1, 0x5320($s3)
    ctx->pc = 0x5f9eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x5f9ebc: 0x74614464  .word       0x74614464                   # INVALID     $v1, $at, 0x4464 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f9ebcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F9EBC raw=0x74614464");
    // 0x5f9ec0: 0x42203361  .word       0x42203361                   # INVALID     $s1, $zero, 0x3361 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f9ec0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x5F9EC0 raw=0x42203361");
    // 0x5f9ec4: 0xa595355  j           func_9654D54
    ctx->pc = 0x5F9EC4u;
    ctx->pc = 0x9654D54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9654D54u, 0x5F9EC4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5F9ECCu;
    // 0x5f9ecc: 0x0  nop
    ctx->pc = 0x5f9eccu;
    // NOP
    ctx->pc = 0x5f9ed0u;
}
