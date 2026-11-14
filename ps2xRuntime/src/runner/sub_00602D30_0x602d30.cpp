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

// Function: sub_00602D30
// Address: 0x602d30 - 0x602e78
void sub_00602D30_0x602d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00602D30_0x602d30");
#endif

    switch (ctx->pc) {
        case 0x602d30u: goto label_602d30;
        case 0x602d34u: goto label_602d34;
        case 0x602d38u: goto label_602d38;
        case 0x602d3cu: goto label_602d3c;
        case 0x602d40u: goto label_602d40;
        case 0x602d44u: goto label_602d44;
        case 0x602d48u: goto label_602d48;
        case 0x602d4cu: goto label_602d4c;
        case 0x602d50u: goto label_602d50;
        case 0x602d54u: goto label_602d54;
        case 0x602d58u: goto label_602d58;
        case 0x602d5cu: goto label_602d5c;
        case 0x602d60u: goto label_602d60;
        case 0x602d64u: goto label_602d64;
        case 0x602d68u: goto label_602d68;
        case 0x602d6cu: goto label_602d6c;
        case 0x602d70u: goto label_602d70;
        case 0x602d74u: goto label_602d74;
        case 0x602d78u: goto label_602d78;
        case 0x602d7cu: goto label_602d7c;
        case 0x602d80u: goto label_602d80;
        case 0x602d84u: goto label_602d84;
        case 0x602d88u: goto label_602d88;
        case 0x602d8cu: goto label_602d8c;
        case 0x602d90u: goto label_602d90;
        case 0x602d94u: goto label_602d94;
        case 0x602d98u: goto label_602d98;
        case 0x602d9cu: goto label_602d9c;
        case 0x602da0u: goto label_602da0;
        case 0x602da4u: goto label_602da4;
        case 0x602da8u: goto label_602da8;
        case 0x602dacu: goto label_602dac;
        case 0x602db0u: goto label_602db0;
        case 0x602db4u: goto label_602db4;
        case 0x602db8u: goto label_602db8;
        case 0x602dbcu: goto label_602dbc;
        case 0x602dc0u: goto label_602dc0;
        case 0x602dc4u: goto label_602dc4;
        case 0x602dc8u: goto label_602dc8;
        case 0x602dccu: goto label_602dcc;
        case 0x602dd0u: goto label_602dd0;
        case 0x602dd4u: goto label_602dd4;
        case 0x602dd8u: goto label_602dd8;
        case 0x602ddcu: goto label_602ddc;
        case 0x602de0u: goto label_602de0;
        case 0x602de4u: goto label_602de4;
        case 0x602de8u: goto label_602de8;
        case 0x602decu: goto label_602dec;
        case 0x602df0u: goto label_602df0;
        case 0x602df4u: goto label_602df4;
        case 0x602df8u: goto label_602df8;
        case 0x602dfcu: goto label_602dfc;
        case 0x602e00u: goto label_602e00;
        case 0x602e04u: goto label_602e04;
        case 0x602e08u: goto label_602e08;
        case 0x602e0cu: goto label_602e0c;
        case 0x602e10u: goto label_602e10;
        case 0x602e14u: goto label_602e14;
        case 0x602e18u: goto label_602e18;
        case 0x602e1cu: goto label_602e1c;
        case 0x602e20u: goto label_602e20;
        case 0x602e24u: goto label_602e24;
        case 0x602e28u: goto label_602e28;
        case 0x602e2cu: goto label_602e2c;
        case 0x602e30u: goto label_602e30;
        case 0x602e34u: goto label_602e34;
        case 0x602e38u: goto label_602e38;
        case 0x602e3cu: goto label_602e3c;
        case 0x602e40u: goto label_602e40;
        case 0x602e44u: goto label_602e44;
        case 0x602e48u: goto label_602e48;
        case 0x602e4cu: goto label_602e4c;
        case 0x602e50u: goto label_602e50;
        case 0x602e54u: goto label_602e54;
        case 0x602e58u: goto label_602e58;
        case 0x602e5cu: goto label_602e5c;
        case 0x602e60u: goto label_602e60;
        case 0x602e64u: goto label_602e64;
        case 0x602e68u: goto label_602e68;
        case 0x602e6cu: goto label_602e6c;
        case 0x602e70u: goto label_602e70;
        case 0x602e74u: goto label_602e74;
        default: break;
    }

    ctx->pc = 0x602d30u;

label_602d30:
    // 0x602d30: 0x9945988  j           func_6516620
label_602d34:
    if (ctx->pc == 0x602D34u) {
        ctx->pc = 0x602D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x602D30u;
        // 0x602d34: 0x459d8865  .word       0x459D8865                   # INVALID     $t4, $sp, -0x779B # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x25 at 0x602D34 raw=0x459D8865");
        ctx->in_delay_slot = false;
        ctx->pc = 0x602D38u;
        goto label_602d38;
    }
    ctx->pc = 0x602D30u;
    ctx->pc = 0x602D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x602D30u;
    // 0x602d34: 0x459d8865  .word       0x459D8865                   # INVALID     $t4, $sp, -0x779B # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
    throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x25 at 0x602D34 raw=0x459D8865");
    ctx->in_delay_slot = false;
    ctx->pc = 0x6516620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x6516620u, 0x602D30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x602D38u;
label_602d38:
    // 0x602d38: 0xee7e7788  .word       0xEE7E7788                   # INVALID     $s3, $fp, 0x7788 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602d38u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x602D38 raw=0xEE7E7788");
label_602d3c:
    // 0x602d3c: 0x1a3f4c74  .word       0x1A3F4C74                   # blez        $s1, . + 4 + (0x4C74 << 2) # 001F0000 <InstrIdType: CPU_NORMAL>
label_602d40:
    if (ctx->pc == 0x602D40u) {
        ctx->pc = 0x602D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x602D3Cu;
        // 0x602d40: 0xbc3a6448  cache       0x1A, 0x6448($at) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
        ctx->pc = 0x602D44u;
        goto label_602d44;
    }
    ctx->pc = 0x602D3Cu;
    {
        const bool branch_taken_0x602d3c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x602D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x602D3Cu;
        // 0x602d40: 0xbc3a6448  cache       0x1A, 0x6448($at) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
        if (branch_taken_0x602d3c) {
            ctx->pc = 0x615F10u;
            return;
        }
    }
    ctx->pc = 0x602D44u;
label_602d44:
    // 0x602d44: 0x48365425  .word       0x48365425                   # qmfc2.i     $s6, $vf10 # 00000424 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x602d44u;
    SET_GPR_VEC(ctx, 22, _mm_castps_si128(ctx->vu0_vf[10]));
label_602d48:
    // 0x602d48: 0x32dae5b0  andi        $k0, $s6, 0xE5B0
    ctx->pc = 0x602d48u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)58800);
label_602d4c:
    // 0x602d4c: 0xd6bd2576  ldc1        $f29, 0x2576($s5)
    ctx->pc = 0x602d4cu;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x602D4C raw=0xD6BD2576");
label_602d50:
    // 0x602d50: 0xdfe2bcb9  ld          $v0, -0x4347($ra)
    ctx->pc = 0x602d50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 31), 4294950073)));
label_602d54:
    // 0x602d54: 0x4dc17c12  .word       0x4DC17C12                   # INVALID     $t6, $at, 0x7C12 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602d54u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x602D54 raw=0x4DC17C12");
label_602d58:
    // 0x602d58: 0xe11f04be  sc          $ra, 0x4BE($t0)
    ctx->pc = 0x602d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 1214); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 31)); SET_GPR_S32(ctx, 31, 1); } else { SET_GPR_S32(ctx, 31, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
label_602d5c:
    // 0x602d5c: 0x2754cae5  addiu       $s4, $k0, -0x351B
    ctx->pc = 0x602d5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 26), 4294953701));
label_602d60:
    // 0x602d60: 0xf6790ec1  sdc1        $f25, 0xEC1($s3)
    ctx->pc = 0x602d60u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x602D60 raw=0xF6790EC1");
label_602d64:
    // 0x602d64: 0x419a4b5c  .word       0x419A4B5C                   # INVALID     $t4, $k0, 0x4B5C # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x602d64u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x602D64 raw=0x419A4B5C");
label_602d68:
    // 0x602d68: 0x62ea9ab5  daddi       $t2, $s7, -0x654B
    ctx->pc = 0x602d68u;
    { int64_t src = (int64_t)GPR_S64(ctx, 23); int64_t imm = (int64_t)(int32_t)4294941365; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, res); }
label_602d6c:
    // 0x602d6c: 0x48ed4a94  .word       0x48ED4A94                   # INVALID     $a3, $t5, 0x4A94 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x602d6cu;
    throw std::runtime_error("Unhandled COP2 format: 0x7 at 0x602D6C raw=0x48ED4A94");
label_602d70:
    // 0x602d70: 0x4b05d4  .word       0x004B05D4                   # dsllv       $zero, $t3, $v0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d70u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 11) << (GPR_U32(ctx, 2) & 0x3F));
label_602d74:
    // 0x602d74: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d74u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602D74 raw=0x004B085C");
label_602d78:
    // 0x602d78: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d78u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602D78 raw=0x004B085C");
label_602d7c:
    // 0x602d7c: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d7cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602D7C raw=0x004B085C");
label_602d80:
    // 0x602d80: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d80u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602D80 raw=0x004B085C");
label_602d84:
    // 0x602d84: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d84u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602D84 raw=0x004B085C");
label_602d88:
    // 0x602d88: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d88u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602D88 raw=0x004B085C");
label_602d8c:
    // 0x602d8c: 0x4b05f8  .word       0x004B05F8                   # dsll        $zero, $t3, 23 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d8cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 11) << 23);
label_602d90:
    // 0x602d90: 0x4b05c4  .word       0x004B05C4                   # sllv        $zero, $t3, $v0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d90u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
label_602d94:
    // 0x602d94: 0x4b05e0  .word       0x004B05E0                   # add         $zero, $v0, $t3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d94u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_602d98:
    // 0x602d98: 0x4b05f0  tge         $v0, $t3, 23
    ctx->pc = 0x602d98u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_602d9c:
    // 0x602d9c: 0x4b060c  .word       0x004B060C                   # syscall     24 # 004B0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d9cu;
    ctx->pc = 0x602DA0u;
runtime->handleSyscall(rdram, ctx, 0x12C18u);
label_602da0:
    // 0x602da0: 0x4b0618  .word       0x004B0618                   # mult        $zero, $v0, $t3 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x602da0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_602da4:
    // 0x602da4: 0x4b0650  .word       0x004B0650                   # mfhi        $zero # 004B0640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602da4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_602da8:
    // 0x602da8: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602da8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602DA8 raw=0x004B085C");
label_602dac:
    // 0x602dac: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602dacu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602DAC raw=0x004B085C");
label_602db0:
    // 0x602db0: 0x4b06c0  .word       0x004B06C0                   # sll         $zero, $t3, 27 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602db0u;
    
label_602db4:
    // 0x602db4: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602db4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602DB4 raw=0x004B085C");
label_602db8:
    // 0x602db8: 0x4b0704  .word       0x004B0704                   # sllv        $zero, $t3, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602db8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
label_602dbc:
    // 0x602dbc: 0x4b073c  .word       0x004B073C                   # dsll32      $zero, $t3, 28 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602dbcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 11) << (32 + 28));
label_602dc0:
    // 0x602dc0: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602dc0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602DC0 raw=0x004B085C");
label_602dc4:
    // 0x602dc4: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602dc4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602DC4 raw=0x004B085C");
label_602dc8:
    // 0x602dc8: 0x4b078c  .word       0x004B078C                   # syscall     30 # 004B0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602dc8u;
    ctx->pc = 0x602DCCu;
runtime->handleSyscall(rdram, ctx, 0x12C1Eu);
label_602dcc:
    // 0x602dcc: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602dccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602DCC raw=0x004B085C");
label_602dd0:
    // 0x602dd0: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602dd0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602DD0 raw=0x004B085C");
label_602dd4:
    // 0x602dd4: 0x4b0844  .word       0x004B0844                   # sllv        $at, $t3, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
label_602dd8:
    // 0x602dd8: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602dd8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602DD8 raw=0x004B085C");
label_602ddc:
    // 0x602ddc: 0x4b0844  .word       0x004B0844                   # sllv        $at, $t3, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
label_602de0:
    // 0x602de0: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602de0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602DE0 raw=0x004B085C");
label_602de4:
    // 0x602de4: 0x4b0844  .word       0x004B0844                   # sllv        $at, $t3, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602de4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
label_602de8:
    // 0x602de8: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602de8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602DE8 raw=0x004B085C");
label_602dec:
    // 0x602dec: 0x4b0844  .word       0x004B0844                   # sllv        $at, $t3, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602decu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
label_602df0:
    // 0x602df0: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602df0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602DF0 raw=0x004B085C");
label_602df4:
    // 0x602df4: 0x4b0844  .word       0x004B0844                   # sllv        $at, $t3, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602df4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
label_602df8:
    // 0x602df8: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602df8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602DF8 raw=0x004B085C");
label_602dfc:
    // 0x602dfc: 0x4b0844  .word       0x004B0844                   # sllv        $at, $t3, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
label_602e00:
    // 0x602e00: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602e00u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602E00 raw=0x004B085C");
label_602e04:
    // 0x602e04: 0x4b0844  .word       0x004B0844                   # sllv        $at, $t3, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602e04u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
label_602e08:
    // 0x602e08: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602e08u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602E08 raw=0x004B085C");
label_602e0c:
    // 0x602e0c: 0x4b0844  .word       0x004B0844                   # sllv        $at, $t3, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
label_602e10:
    // 0x602e10: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602e10u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602E10 raw=0x004B085C");
label_602e14:
    // 0x602e14: 0x4b0844  .word       0x004B0844                   # sllv        $at, $t3, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602e14u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
label_602e18:
    // 0x602e18: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602e18u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602E18 raw=0x004B085C");
label_602e1c:
    // 0x602e1c: 0x4b0844  .word       0x004B0844                   # sllv        $at, $t3, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
label_602e20:
    // 0x602e20: 0x4b07dc  .word       0x004B07DC                   # dmult       $v0, $t3 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602e20u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602E20 raw=0x004B07DC");
label_602e24:
    // 0x602e24: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602e24u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602E24 raw=0x004B085C");
label_602e28:
    // 0x602e28: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602e28u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602E28 raw=0x004B085C");
label_602e2c:
    // 0x602e2c: 0x4b0844  .word       0x004B0844                   # sllv        $at, $t3, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
label_602e30:
    // 0x602e30: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602e30u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602E30 raw=0x004B085C");
label_602e34:
    // 0x602e34: 0x4b0844  .word       0x004B0844                   # sllv        $at, $t3, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602e34u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
label_602e38:
    // 0x602e38: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602e38u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602E38 raw=0x004B085C");
label_602e3c:
    // 0x602e3c: 0x4b0844  .word       0x004B0844                   # sllv        $at, $t3, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
label_602e40:
    // 0x602e40: 0x4b085c  .word       0x004B085C                   # dmult       $v0, $t3 # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602e40u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x602E40 raw=0x004B085C");
label_602e44:
    // 0x602e44: 0x4b0844  .word       0x004B0844                   # sllv        $at, $t3, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602e44u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
label_602e48:
    // 0x602e48: 0xffffd8f0  sd          $ra, -0x2710($ra)
    ctx->pc = 0x602e48u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294957296), GPR_U64(ctx, 31));
label_602e4c:
    // 0x602e4c: 0xffffd8f0  sd          $ra, -0x2710($ra)
    ctx->pc = 0x602e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294957296), GPR_U64(ctx, 31));
label_602e50:
    // 0x602e50: 0x0  nop
    ctx->pc = 0x602e50u;
    // NOP
label_602e54:
    // 0x602e54: 0x3fbeb852  .word       0x3FBEB852                   # lui         $fp, 0xB852 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602e54u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)47186 << 16));
label_602e58:
    // 0x602e58: 0x3f547ae1  .word       0x3F547AE1                   # lui         $s4, 0x7AE1 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602e58u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31457 << 16));
label_602e5c:
    // 0x602e5c: 0xfffff5d6  sd          $ra, -0xA2A($ra)
    ctx->pc = 0x602e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294964694), GPR_U64(ctx, 31));
label_602e60:
    // 0x602e60: 0x3be56042  xori        $a1, $ra, 0x6042
    ctx->pc = 0x602e60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 31) ^ (uint64_t)(uint16_t)24642);
label_602e64:
    // 0x602e64: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_602e68:
    if (ctx->pc == 0x602E68u) {
        ctx->pc = 0x602E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x602E64u;
        // 0x602e68: 0x3c343958  .word       0x3C343958                   # lui         $s4, 0x3958 # 00200000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)14680 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x602E6Cu;
        goto label_602e6c;
    }
    ctx->pc = 0x602E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x602E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x602E64u;
        // 0x602e68: 0x3c343958  .word       0x3C343958                   # lui         $s4, 0x3958 # 00200000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)14680 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x602E64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x602E6Cu;
label_602e6c:
    // 0x602e6c: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x602e6cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x602E6C raw=0x42C80000");
label_602e70:
    // 0x602e70: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x602e70u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x602E70 raw=0x42C80000");
label_602e74:
    // 0x602e74: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x602e74u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x602E74 raw=0x459C4000");
    ctx->pc = 0x602e78u;
}
