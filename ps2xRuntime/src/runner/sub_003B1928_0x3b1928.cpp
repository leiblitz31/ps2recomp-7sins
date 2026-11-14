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

// Function: sub_003B1928
// Address: 0x3b1928 - 0x3b1a28
void sub_003B1928_0x3b1928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1928_0x3b1928");
#endif

    switch (ctx->pc) {
        case 0x3b1928u: goto label_3b1928;
        case 0x3b192cu: goto label_3b192c;
        case 0x3b1930u: goto label_3b1930;
        case 0x3b1934u: goto label_3b1934;
        case 0x3b1938u: goto label_3b1938;
        case 0x3b193cu: goto label_3b193c;
        case 0x3b1940u: goto label_3b1940;
        case 0x3b1944u: goto label_3b1944;
        case 0x3b1948u: goto label_3b1948;
        case 0x3b194cu: goto label_3b194c;
        case 0x3b1950u: goto label_3b1950;
        case 0x3b1954u: goto label_3b1954;
        case 0x3b1958u: goto label_3b1958;
        case 0x3b195cu: goto label_3b195c;
        case 0x3b1960u: goto label_3b1960;
        case 0x3b1964u: goto label_3b1964;
        case 0x3b1968u: goto label_3b1968;
        case 0x3b196cu: goto label_3b196c;
        case 0x3b1970u: goto label_3b1970;
        case 0x3b1974u: goto label_3b1974;
        case 0x3b1978u: goto label_3b1978;
        case 0x3b197cu: goto label_3b197c;
        case 0x3b1980u: goto label_3b1980;
        case 0x3b1984u: goto label_3b1984;
        case 0x3b1988u: goto label_3b1988;
        case 0x3b198cu: goto label_3b198c;
        case 0x3b1990u: goto label_3b1990;
        case 0x3b1994u: goto label_3b1994;
        case 0x3b1998u: goto label_3b1998;
        case 0x3b199cu: goto label_3b199c;
        case 0x3b19a0u: goto label_3b19a0;
        case 0x3b19a4u: goto label_3b19a4;
        case 0x3b19a8u: goto label_3b19a8;
        case 0x3b19acu: goto label_3b19ac;
        case 0x3b19b0u: goto label_3b19b0;
        case 0x3b19b4u: goto label_3b19b4;
        case 0x3b19b8u: goto label_3b19b8;
        case 0x3b19bcu: goto label_3b19bc;
        case 0x3b19c0u: goto label_3b19c0;
        case 0x3b19c4u: goto label_3b19c4;
        case 0x3b19c8u: goto label_3b19c8;
        case 0x3b19ccu: goto label_3b19cc;
        case 0x3b19d0u: goto label_3b19d0;
        case 0x3b19d4u: goto label_3b19d4;
        case 0x3b19d8u: goto label_3b19d8;
        case 0x3b19dcu: goto label_3b19dc;
        case 0x3b19e0u: goto label_3b19e0;
        case 0x3b19e4u: goto label_3b19e4;
        case 0x3b19e8u: goto label_3b19e8;
        case 0x3b19ecu: goto label_3b19ec;
        case 0x3b19f0u: goto label_3b19f0;
        case 0x3b19f4u: goto label_3b19f4;
        case 0x3b19f8u: goto label_3b19f8;
        case 0x3b19fcu: goto label_3b19fc;
        case 0x3b1a00u: goto label_3b1a00;
        case 0x3b1a04u: goto label_3b1a04;
        case 0x3b1a08u: goto label_3b1a08;
        case 0x3b1a0cu: goto label_3b1a0c;
        case 0x3b1a10u: goto label_3b1a10;
        case 0x3b1a14u: goto label_3b1a14;
        case 0x3b1a18u: goto label_3b1a18;
        case 0x3b1a1cu: goto label_3b1a1c;
        case 0x3b1a20u: goto label_3b1a20;
        case 0x3b1a24u: goto label_3b1a24;
        default: break;
    }

    ctx->pc = 0x3b1928u;

label_3b1928:
    // 0x3b1928: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b1928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3b192c:
    // 0x3b192c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3b192cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3b1930:
    // 0x3b1930: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3b1930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3b1934:
    // 0x3b1934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b1934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b1938:
    // 0x3b1938: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b1938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3b193c:
    // 0x3b193c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3b193cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3b1940:
    // 0x3b1940: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
label_3b1944:
    if (ctx->pc == 0x3B1944u) {
        ctx->pc = 0x3B1944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1940u;
        // 0x3b1944: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1948u;
        goto label_3b1948;
    }
    ctx->pc = 0x3B1940u;
    {
        const bool branch_taken_0x3b1940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1940u;
        // 0x3b1944: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1940) {
            ctx->pc = 0x3B1A04u;
            goto label_3b1a04;
        }
    }
    ctx->pc = 0x3B1948u;
label_3b1948:
    // 0x3b1948: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3b1948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b194c:
    // 0x3b194c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x3b194cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b1950:
    // 0x3b1950: 0x1051002c  beq         $v0, $s1, . + 4 + (0x2C << 2)
label_3b1954:
    if (ctx->pc == 0x3B1954u) {
        ctx->pc = 0x3B1954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1950u;
        // 0x3b1954: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1958u;
        goto label_3b1958;
    }
    ctx->pc = 0x3B1950u;
    {
        const bool branch_taken_0x3b1950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x3B1954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1950u;
        // 0x3b1954: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1950) {
            ctx->pc = 0x3B1A04u;
            goto label_3b1a04;
        }
    }
    ctx->pc = 0x3B1958u;
label_3b1958:
    // 0x3b1958: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x3b1958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3b195c:
    // 0x3b195c: 0xc103642  jal         func_40D908
label_3b1960:
    if (ctx->pc == 0x3B1960u) {
        ctx->pc = 0x3B1960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B195Cu;
        // 0x3b1960: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1964u;
        goto label_3b1964;
    }
    ctx->pc = 0x3B195Cu;
    SET_GPR_U32(ctx, 31, 0x3B1964u);
    ctx->pc = 0x3B1960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B195Cu;
    // 0x3b1960: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3B195Cu, 0x3B1964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1964u;
label_3b1964:
    // 0x3b1964: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b1964u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1968:
    // 0x3b1968: 0x52600026  beql        $s3, $zero, . + 4 + (0x26 << 2)
label_3b196c:
    if (ctx->pc == 0x3B196Cu) {
        ctx->pc = 0x3B196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1968u;
        // 0x3b196c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1970u;
        goto label_3b1970;
    }
    ctx->pc = 0x3B1968u;
    {
        const bool branch_taken_0x3b1968 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1968) {
            ctx->pc = 0x3B196Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1968u;
            // 0x3b196c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1A04u;
            goto label_3b1a04;
        }
    }
    ctx->pc = 0x3B1970u;
label_3b1970:
    // 0x3b1970: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3b1970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b1974:
    // 0x3b1974: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
label_3b1978:
    if (ctx->pc == 0x3B1978u) {
        ctx->pc = 0x3B1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1974u;
        // 0x3b1978: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B197Cu;
        goto label_3b197c;
    }
    ctx->pc = 0x3B1974u;
    {
        const bool branch_taken_0x3b1974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x3b1974) {
            ctx->pc = 0x3B1978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1974u;
            // 0x3b1978: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1988u;
            goto label_3b1988;
        }
    }
    ctx->pc = 0x3B197Cu;
label_3b197c:
    // 0x3b197c: 0xc1036d2  jal         func_40DB48
label_3b1980:
    if (ctx->pc == 0x3B1980u) {
        ctx->pc = 0x3B1980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B197Cu;
        // 0x3b1980: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1984u;
        goto label_3b1984;
    }
    ctx->pc = 0x3B197Cu;
    SET_GPR_U32(ctx, 31, 0x3B1984u);
    ctx->pc = 0x3B1980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B197Cu;
    // 0x3b1980: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B197Cu, 0x3B1984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1984u;
label_3b1984:
    // 0x3b1984: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b1984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1988:
    // 0x3b1988: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3b1988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b198c:
    // 0x3b198c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b198cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b1990:
    // 0x3b1990: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_3b1994:
    if (ctx->pc == 0x3B1994u) {
        ctx->pc = 0x3B1994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1990u;
        // 0x3b1994: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1998u;
        goto label_3b1998;
    }
    ctx->pc = 0x3B1990u;
    {
        const bool branch_taken_0x3b1990 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B1994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1990u;
        // 0x3b1994: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1990) {
            ctx->pc = 0x3B19A4u;
            goto label_3b19a4;
        }
    }
    ctx->pc = 0x3B1998u;
label_3b1998:
    // 0x3b1998: 0xc10376a  jal         func_40DDA8
label_3b199c:
    if (ctx->pc == 0x3B199Cu) {
        ctx->pc = 0x3B199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1998u;
        // 0x3b199c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B19A0u;
        goto label_3b19a0;
    }
    ctx->pc = 0x3B1998u;
    SET_GPR_U32(ctx, 31, 0x3B19A0u);
    ctx->pc = 0x3B199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1998u;
    // 0x3b199c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B1998u, 0x3B19A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B19A0u;
label_3b19a0:
    // 0x3b19a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b19a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b19a4:
    // 0x3b19a4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_3b19a8:
    if (ctx->pc == 0x3B19A8u) {
        ctx->pc = 0x3B19A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19A4u;
        // 0x3b19a8: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B19ACu;
        goto label_3b19ac;
    }
    ctx->pc = 0x3B19A4u;
    {
        const bool branch_taken_0x3b19a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B19A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19A4u;
        // 0x3b19a8: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b19a4) {
            ctx->pc = 0x3B19E8u;
            goto label_3b19e8;
        }
    }
    ctx->pc = 0x3B19ACu;
label_3b19ac:
    // 0x3b19ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b19acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b19b0:
    // 0x3b19b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b19b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b19b4:
    // 0x3b19b4: 0xc103722  jal         func_40DC88
label_3b19b8:
    if (ctx->pc == 0x3B19B8u) {
        ctx->pc = 0x3B19B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19B4u;
        // 0x3b19b8: 0x34c601a1  ori         $a2, $a2, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B19BCu;
        goto label_3b19bc;
    }
    ctx->pc = 0x3B19B4u;
    SET_GPR_U32(ctx, 31, 0x3B19BCu);
    ctx->pc = 0x3B19B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B19B4u;
    // 0x3b19b8: 0x34c601a1  ori         $a2, $a2, 0x1A1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)417);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3B19B4u, 0x3B19BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B19BCu;
label_3b19bc:
    // 0x3b19bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3b19c0:
    if (ctx->pc == 0x3B19C0u) {
        ctx->pc = 0x3B19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19BCu;
        // 0x3b19c0: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B19C4u;
        goto label_3b19c4;
    }
    ctx->pc = 0x3B19BCu;
    {
        const bool branch_taken_0x3b19bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19BCu;
        // 0x3b19c0: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b19bc) {
            ctx->pc = 0x3B19D8u;
            goto label_3b19d8;
        }
    }
    ctx->pc = 0x3B19C4u;
label_3b19c4:
    // 0x3b19c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b19c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b19c8:
    // 0x3b19c8: 0x2260018  mult        $zero, $s1, $a2
    ctx->pc = 0x3b19c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3b19cc:
    // 0x3b19cc: 0x3012  mflo        $a2
    ctx->pc = 0x3b19ccu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_3b19d0:
    // 0x3b19d0: 0xc0bb778  jal         func_2EDDE0
label_3b19d4:
    if (ctx->pc == 0x3B19D4u) {
        ctx->pc = 0x3B19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19D0u;
        // 0x3b19d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B19D8u;
        goto label_3b19d8;
    }
    ctx->pc = 0x3B19D0u;
    SET_GPR_U32(ctx, 31, 0x3B19D8u);
    ctx->pc = 0x3B19D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B19D0u;
    // 0x3b19d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3B19D0u, 0x3B19D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B19D8u;
label_3b19d8:
    // 0x3b19d8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b19d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b19dc:
    // 0x3b19dc: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3b19dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3b19e0:
    // 0x3b19e0: 0x40f809  jalr        $v0
label_3b19e4:
    if (ctx->pc == 0x3B19E4u) {
        ctx->pc = 0x3B19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19E0u;
        // 0x3b19e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B19E8u;
        goto label_3b19e8;
    }
    ctx->pc = 0x3B19E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B19E8u);
        ctx->pc = 0x3B19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19E0u;
        // 0x3b19e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B19E0u, 0x3B19E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B19E8u;
label_3b19e8:
    // 0x3b19e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b19ec:
    // 0x3b19ec: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x3b19ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_3b19f0:
    // 0x3b19f0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3b19f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3b19f4:
    // 0x3b19f4: 0xc0ec64a  jal         func_3B1928
label_3b19f8:
    if (ctx->pc == 0x3B19F8u) {
        ctx->pc = 0x3B19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19F4u;
        // 0x3b19f8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B19FCu;
        goto label_3b19fc;
    }
    ctx->pc = 0x3B19F4u;
    SET_GPR_U32(ctx, 31, 0x3B19FCu);
    ctx->pc = 0x3B19F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B19F4u;
    // 0x3b19f8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1928u;
    goto label_3b1928;
    ctx->pc = 0x3B19FCu;
label_3b19fc:
    // 0x3b19fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3b1a00:
    if (ctx->pc == 0x3B1A00u) {
        ctx->pc = 0x3B1A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19FCu;
        // 0x3b1a00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A04u;
        goto label_3b1a04;
    }
    ctx->pc = 0x3B19FCu;
    {
        const bool branch_taken_0x3b19fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19FCu;
        // 0x3b1a00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b19fc) {
            ctx->pc = 0x3B1A08u;
            goto label_3b1a08;
        }
    }
    ctx->pc = 0x3B1A04u;
label_3b1a04:
    // 0x3b1a04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b1a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b1a08:
    // 0x3b1a08: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3b1a08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b1a0c:
    // 0x3b1a0c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3b1a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b1a10:
    // 0x3b1a10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b1a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b1a14:
    // 0x3b1a14: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3b1a14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b1a18:
    // 0x3b1a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b1a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b1a1c:
    // 0x3b1a1c: 0x3e00008  jr          $ra
label_3b1a20:
    if (ctx->pc == 0x3B1A20u) {
        ctx->pc = 0x3B1A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A1Cu;
        // 0x3b1a20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A24u;
        goto label_3b1a24;
    }
    ctx->pc = 0x3B1A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A1Cu;
        // 0x3b1a20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1A24u;
label_3b1a24:
    // 0x3b1a24: 0x0  nop
    ctx->pc = 0x3b1a24u;
    // NOP
    ctx->pc = 0x3b1a28u;
}
