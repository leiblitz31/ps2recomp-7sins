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

// Function: sub_003C38F0
// Address: 0x3c38f0 - 0x3c3b68
void sub_003C38F0_0x3c38f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C38F0_0x3c38f0");
#endif

    switch (ctx->pc) {
        case 0x3c38f0u: goto label_3c38f0;
        case 0x3c38f4u: goto label_3c38f4;
        case 0x3c38f8u: goto label_3c38f8;
        case 0x3c38fcu: goto label_3c38fc;
        case 0x3c3900u: goto label_3c3900;
        case 0x3c3904u: goto label_3c3904;
        case 0x3c3908u: goto label_3c3908;
        case 0x3c390cu: goto label_3c390c;
        case 0x3c3910u: goto label_3c3910;
        case 0x3c3914u: goto label_3c3914;
        case 0x3c3918u: goto label_3c3918;
        case 0x3c391cu: goto label_3c391c;
        case 0x3c3920u: goto label_3c3920;
        case 0x3c3924u: goto label_3c3924;
        case 0x3c3928u: goto label_3c3928;
        case 0x3c392cu: goto label_3c392c;
        case 0x3c3930u: goto label_3c3930;
        case 0x3c3934u: goto label_3c3934;
        case 0x3c3938u: goto label_3c3938;
        case 0x3c393cu: goto label_3c393c;
        case 0x3c3940u: goto label_3c3940;
        case 0x3c3944u: goto label_3c3944;
        case 0x3c3948u: goto label_3c3948;
        case 0x3c394cu: goto label_3c394c;
        case 0x3c3950u: goto label_3c3950;
        case 0x3c3954u: goto label_3c3954;
        case 0x3c3958u: goto label_3c3958;
        case 0x3c395cu: goto label_3c395c;
        case 0x3c3960u: goto label_3c3960;
        case 0x3c3964u: goto label_3c3964;
        case 0x3c3968u: goto label_3c3968;
        case 0x3c396cu: goto label_3c396c;
        case 0x3c3970u: goto label_3c3970;
        case 0x3c3974u: goto label_3c3974;
        case 0x3c3978u: goto label_3c3978;
        case 0x3c397cu: goto label_3c397c;
        case 0x3c3980u: goto label_3c3980;
        case 0x3c3984u: goto label_3c3984;
        case 0x3c3988u: goto label_3c3988;
        case 0x3c398cu: goto label_3c398c;
        case 0x3c3990u: goto label_3c3990;
        case 0x3c3994u: goto label_3c3994;
        case 0x3c3998u: goto label_3c3998;
        case 0x3c399cu: goto label_3c399c;
        case 0x3c39a0u: goto label_3c39a0;
        case 0x3c39a4u: goto label_3c39a4;
        case 0x3c39a8u: goto label_3c39a8;
        case 0x3c39acu: goto label_3c39ac;
        case 0x3c39b0u: goto label_3c39b0;
        case 0x3c39b4u: goto label_3c39b4;
        case 0x3c39b8u: goto label_3c39b8;
        case 0x3c39bcu: goto label_3c39bc;
        case 0x3c39c0u: goto label_3c39c0;
        case 0x3c39c4u: goto label_3c39c4;
        case 0x3c39c8u: goto label_3c39c8;
        case 0x3c39ccu: goto label_3c39cc;
        case 0x3c39d0u: goto label_3c39d0;
        case 0x3c39d4u: goto label_3c39d4;
        case 0x3c39d8u: goto label_3c39d8;
        case 0x3c39dcu: goto label_3c39dc;
        case 0x3c39e0u: goto label_3c39e0;
        case 0x3c39e4u: goto label_3c39e4;
        case 0x3c39e8u: goto label_3c39e8;
        case 0x3c39ecu: goto label_3c39ec;
        case 0x3c39f0u: goto label_3c39f0;
        case 0x3c39f4u: goto label_3c39f4;
        case 0x3c39f8u: goto label_3c39f8;
        case 0x3c39fcu: goto label_3c39fc;
        case 0x3c3a00u: goto label_3c3a00;
        case 0x3c3a04u: goto label_3c3a04;
        case 0x3c3a08u: goto label_3c3a08;
        case 0x3c3a0cu: goto label_3c3a0c;
        case 0x3c3a10u: goto label_3c3a10;
        case 0x3c3a14u: goto label_3c3a14;
        case 0x3c3a18u: goto label_3c3a18;
        case 0x3c3a1cu: goto label_3c3a1c;
        case 0x3c3a20u: goto label_3c3a20;
        case 0x3c3a24u: goto label_3c3a24;
        case 0x3c3a28u: goto label_3c3a28;
        case 0x3c3a2cu: goto label_3c3a2c;
        case 0x3c3a30u: goto label_3c3a30;
        case 0x3c3a34u: goto label_3c3a34;
        case 0x3c3a38u: goto label_3c3a38;
        case 0x3c3a3cu: goto label_3c3a3c;
        case 0x3c3a40u: goto label_3c3a40;
        case 0x3c3a44u: goto label_3c3a44;
        case 0x3c3a48u: goto label_3c3a48;
        case 0x3c3a4cu: goto label_3c3a4c;
        case 0x3c3a50u: goto label_3c3a50;
        case 0x3c3a54u: goto label_3c3a54;
        case 0x3c3a58u: goto label_3c3a58;
        case 0x3c3a5cu: goto label_3c3a5c;
        case 0x3c3a60u: goto label_3c3a60;
        case 0x3c3a64u: goto label_3c3a64;
        case 0x3c3a68u: goto label_3c3a68;
        case 0x3c3a6cu: goto label_3c3a6c;
        case 0x3c3a70u: goto label_3c3a70;
        case 0x3c3a74u: goto label_3c3a74;
        case 0x3c3a78u: goto label_3c3a78;
        case 0x3c3a7cu: goto label_3c3a7c;
        case 0x3c3a80u: goto label_3c3a80;
        case 0x3c3a84u: goto label_3c3a84;
        case 0x3c3a88u: goto label_3c3a88;
        case 0x3c3a8cu: goto label_3c3a8c;
        case 0x3c3a90u: goto label_3c3a90;
        case 0x3c3a94u: goto label_3c3a94;
        case 0x3c3a98u: goto label_3c3a98;
        case 0x3c3a9cu: goto label_3c3a9c;
        case 0x3c3aa0u: goto label_3c3aa0;
        case 0x3c3aa4u: goto label_3c3aa4;
        case 0x3c3aa8u: goto label_3c3aa8;
        case 0x3c3aacu: goto label_3c3aac;
        case 0x3c3ab0u: goto label_3c3ab0;
        case 0x3c3ab4u: goto label_3c3ab4;
        case 0x3c3ab8u: goto label_3c3ab8;
        case 0x3c3abcu: goto label_3c3abc;
        case 0x3c3ac0u: goto label_3c3ac0;
        case 0x3c3ac4u: goto label_3c3ac4;
        case 0x3c3ac8u: goto label_3c3ac8;
        case 0x3c3accu: goto label_3c3acc;
        case 0x3c3ad0u: goto label_3c3ad0;
        case 0x3c3ad4u: goto label_3c3ad4;
        case 0x3c3ad8u: goto label_3c3ad8;
        case 0x3c3adcu: goto label_3c3adc;
        case 0x3c3ae0u: goto label_3c3ae0;
        case 0x3c3ae4u: goto label_3c3ae4;
        case 0x3c3ae8u: goto label_3c3ae8;
        case 0x3c3aecu: goto label_3c3aec;
        case 0x3c3af0u: goto label_3c3af0;
        case 0x3c3af4u: goto label_3c3af4;
        case 0x3c3af8u: goto label_3c3af8;
        case 0x3c3afcu: goto label_3c3afc;
        case 0x3c3b00u: goto label_3c3b00;
        case 0x3c3b04u: goto label_3c3b04;
        case 0x3c3b08u: goto label_3c3b08;
        case 0x3c3b0cu: goto label_3c3b0c;
        case 0x3c3b10u: goto label_3c3b10;
        case 0x3c3b14u: goto label_3c3b14;
        case 0x3c3b18u: goto label_3c3b18;
        case 0x3c3b1cu: goto label_3c3b1c;
        case 0x3c3b20u: goto label_3c3b20;
        case 0x3c3b24u: goto label_3c3b24;
        case 0x3c3b28u: goto label_3c3b28;
        case 0x3c3b2cu: goto label_3c3b2c;
        case 0x3c3b30u: goto label_3c3b30;
        case 0x3c3b34u: goto label_3c3b34;
        case 0x3c3b38u: goto label_3c3b38;
        case 0x3c3b3cu: goto label_3c3b3c;
        case 0x3c3b40u: goto label_3c3b40;
        case 0x3c3b44u: goto label_3c3b44;
        case 0x3c3b48u: goto label_3c3b48;
        case 0x3c3b4cu: goto label_3c3b4c;
        case 0x3c3b50u: goto label_3c3b50;
        case 0x3c3b54u: goto label_3c3b54;
        case 0x3c3b58u: goto label_3c3b58;
        case 0x3c3b5cu: goto label_3c3b5c;
        case 0x3c3b60u: goto label_3c3b60;
        case 0x3c3b64u: goto label_3c3b64;
        default: break;
    }

    ctx->pc = 0x3c38f0u;

label_3c38f0:
    // 0x3c38f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3c38f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3c38f4:
    // 0x3c38f4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3c38f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3c38f8:
    // 0x3c38f8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3c38f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_3c38fc:
    // 0x3c38fc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3c38fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c3900:
    // 0x3c3900: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3c3900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3c3904:
    // 0x3c3904: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x3c3904u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3c3908:
    // 0x3c3908: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3c3908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_3c390c:
    // 0x3c390c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3c390cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c3910:
    // 0x3c3910: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3c3910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_3c3914:
    // 0x3c3914: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3c3914u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c3918:
    // 0x3c3918: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3c3918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3c391c:
    // 0x3c391c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x3c391cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3c3920:
    // 0x3c3920: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3c3920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3c3924:
    // 0x3c3924: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3c3924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3c3928:
    // 0x3c3928: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3c3928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_3c392c:
    // 0x3c392c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c392cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c3930:
    // 0x3c3930: 0xc0f0c30  jal         func_3C30C0
label_3c3934:
    if (ctx->pc == 0x3C3934u) {
        ctx->pc = 0x3C3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3930u;
        // 0x3c3934: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3938u;
        goto label_3c3938;
    }
    ctx->pc = 0x3C3930u;
    SET_GPR_U32(ctx, 31, 0x3C3938u);
    ctx->pc = 0x3C3934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3930u;
    // 0x3c3934: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C30C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C30C0u, 0x3C3930u, 0x3C3938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3938u;
label_3c3938:
    // 0x3c3938: 0x1440007f  bnez        $v0, . + 4 + (0x7F << 2)
label_3c393c:
    if (ctx->pc == 0x3C393Cu) {
        ctx->pc = 0x3C393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3938u;
        // 0x3c393c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3940u;
        goto label_3c3940;
    }
    ctx->pc = 0x3C3938u;
    {
        const bool branch_taken_0x3c3938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3938u;
        // 0x3c393c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3938) {
            ctx->pc = 0x3C3B38u;
            goto label_3c3b38;
        }
    }
    ctx->pc = 0x3C3940u;
label_3c3940:
    // 0x3c3940: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3c3940u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_3c3944:
    // 0x3c3944: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x3c3944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_3c3948:
    // 0x3c3948: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x3c3948u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c394c:
    // 0x3c394c: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x3c394cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_3c3950:
    // 0x3c3950: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x3c3950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3c3954:
    // 0x3c3954: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x3c3954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3c3958:
    // 0x3c3958: 0x40f809  jalr        $v0
label_3c395c:
    if (ctx->pc == 0x3C395Cu) {
        ctx->pc = 0x3C395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3958u;
        // 0x3c395c: 0x34a501be  ori         $a1, $a1, 0x1BE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)446);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3960u;
        goto label_3c3960;
    }
    ctx->pc = 0x3C3958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C3960u);
        ctx->pc = 0x3C395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3958u;
        // 0x3c395c: 0x34a501be  ori         $a1, $a1, 0x1BE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)446);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3958u, 0x3C3960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C3960u;
label_3c3960:
    // 0x3c3960: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x3c3960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_3c3964:
    // 0x3c3964: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x3c3964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
label_3c3968:
    // 0x3c3968: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c3968u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c396c:
    // 0x3c396c: 0x24843f78  addiu       $a0, $a0, 0x3F78
    ctx->pc = 0x3c396cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16248));
label_3c3970:
    // 0x3c3970: 0x24a53fa0  addiu       $a1, $a1, 0x3FA0
    ctx->pc = 0x3c3970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16288));
label_3c3974:
    // 0x3c3974: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x3c3974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_3c3978:
    // 0x3c3978: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x3c3978u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
label_3c397c:
    // 0x3c397c: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x3c397cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
label_3c3980:
    // 0x3c3980: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x3c3980u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
label_3c3984:
    // 0x3c3984: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x3c3984u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
label_3c3988:
    // 0x3c3988: 0x3c0b003c  lui         $t3, 0x3C
    ctx->pc = 0x3c3988u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)60 << 16));
label_3c398c:
    // 0x3c398c: 0x3c0c003c  lui         $t4, 0x3C
    ctx->pc = 0x3c398cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)60 << 16));
label_3c3990:
    // 0x3c3990: 0x3c0d003c  lui         $t5, 0x3C
    ctx->pc = 0x3c3990u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)60 << 16));
label_3c3994:
    // 0x3c3994: 0x3c0e003c  lui         $t6, 0x3C
    ctx->pc = 0x3c3994u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)60 << 16));
label_3c3998:
    // 0x3c3998: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x3c3998u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
label_3c399c:
    // 0x3c399c: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x3c399cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
label_3c39a0:
    // 0x3c39a0: 0x24633b68  addiu       $v1, $v1, 0x3B68
    ctx->pc = 0x3c39a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15208));
label_3c39a4:
    // 0x3c39a4: 0x24e735f0  addiu       $a3, $a3, 0x35F0
    ctx->pc = 0x3c39a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13808));
label_3c39a8:
    // 0x3c39a8: 0x25083b90  addiu       $t0, $t0, 0x3B90
    ctx->pc = 0x3c39a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15248));
label_3c39ac:
    // 0x3c39ac: 0x25293760  addiu       $t1, $t1, 0x3760
    ctx->pc = 0x3c39acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 14176));
label_3c39b0:
    // 0x3c39b0: 0x254a3bb8  addiu       $t2, $t2, 0x3BB8
    ctx->pc = 0x3c39b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 15288));
label_3c39b4:
    // 0x3c39b4: 0x256b3c40  addiu       $t3, $t3, 0x3C40
    ctx->pc = 0x3c39b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 15424));
label_3c39b8:
    // 0x3c39b8: 0x258c3d98  addiu       $t4, $t4, 0x3D98
    ctx->pc = 0x3c39b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 15768));
label_3c39bc:
    // 0x3c39bc: 0x25ad3e88  addiu       $t5, $t5, 0x3E88
    ctx->pc = 0x3c39bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16008));
label_3c39c0:
    // 0x3c39c0: 0x25ce22d8  addiu       $t6, $t6, 0x22D8
    ctx->pc = 0x3c39c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8920));
label_3c39c4:
    // 0x3c39c4: 0x25ef3eb8  addiu       $t7, $t7, 0x3EB8
    ctx->pc = 0x3c39c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16056));
label_3c39c8:
    // 0x3c39c8: 0x26313e98  addiu       $s1, $s1, 0x3E98
    ctx->pc = 0x3c39c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16024));
label_3c39cc:
    // 0x3c39cc: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x3c39ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
label_3c39d0:
    // 0x3c39d0: 0xae45001c  sw          $a1, 0x1C($s2)
    ctx->pc = 0x3c39d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 5));
label_3c39d4:
    // 0x3c39d4: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x3c39d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
label_3c39d8:
    // 0x3c39d8: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x3c39d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_3c39dc:
    // 0x3c39dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c39dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c39e0:
    // 0x3c39e0: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x3c39e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_3c39e4:
    // 0x3c39e4: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x3c39e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_3c39e8:
    // 0x3c39e8: 0xae470028  sw          $a3, 0x28($s2)
    ctx->pc = 0x3c39e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 7));
label_3c39ec:
    // 0x3c39ec: 0x34c601be  ori         $a2, $a2, 0x1BE
    ctx->pc = 0x3c39ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)446);
label_3c39f0:
    // 0x3c39f0: 0xae48002c  sw          $t0, 0x2C($s2)
    ctx->pc = 0x3c39f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 8));
label_3c39f4:
    // 0x3c39f4: 0xae490030  sw          $t1, 0x30($s2)
    ctx->pc = 0x3c39f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 9));
label_3c39f8:
    // 0x3c39f8: 0xae4a0034  sw          $t2, 0x34($s2)
    ctx->pc = 0x3c39f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 10));
label_3c39fc:
    // 0x3c39fc: 0xae4b0038  sw          $t3, 0x38($s2)
    ctx->pc = 0x3c39fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 11));
label_3c3a00:
    // 0x3c3a00: 0xae4c003c  sw          $t4, 0x3C($s2)
    ctx->pc = 0x3c3a00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 12));
label_3c3a04:
    // 0x3c3a04: 0xae4d0040  sw          $t5, 0x40($s2)
    ctx->pc = 0x3c3a04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 13));
label_3c3a08:
    // 0x3c3a08: 0xae4e0044  sw          $t6, 0x44($s2)
    ctx->pc = 0x3c3a08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 14));
label_3c3a0c:
    // 0x3c3a0c: 0xae4f0048  sw          $t7, 0x48($s2)
    ctx->pc = 0x3c3a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 15));
label_3c3a10:
    // 0x3c3a10: 0x40f809  jalr        $v0
label_3c3a14:
    if (ctx->pc == 0x3C3A14u) {
        ctx->pc = 0x3C3A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A10u;
        // 0x3c3a14: 0xae51004c  sw          $s1, 0x4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3A18u;
        goto label_3c3a18;
    }
    ctx->pc = 0x3C3A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C3A18u);
        ctx->pc = 0x3C3A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A10u;
        // 0x3c3a14: 0xae51004c  sw          $s1, 0x4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3A10u, 0x3C3A18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C3A18u;
label_3c3a18:
    // 0x3c3a18: 0x1a800036  blez        $s4, . + 4 + (0x36 << 2)
label_3c3a1c:
    if (ctx->pc == 0x3C3A1Cu) {
        ctx->pc = 0x3C3A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A18u;
        // 0x3c3a1c: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3A20u;
        goto label_3c3a20;
    }
    ctx->pc = 0x3C3A18u;
    {
        const bool branch_taken_0x3c3a18 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x3C3A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A18u;
        // 0x3c3a1c: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3a18) {
            ctx->pc = 0x3C3AF4u;
            goto label_3c3af4;
        }
    }
    ctx->pc = 0x3C3A20u;
label_3c3a20:
    // 0x3c3a20: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3c3a20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c3a24:
    // 0x3c3a24: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3c3a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c3a28:
    // 0x3c3a28: 0x141023  negu        $v0, $s4
    ctx->pc = 0x3c3a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
label_3c3a2c:
    // 0x3c3a2c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3c3a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c3a30:
    // 0x3c3a30: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x3c3a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3c3a34:
    // 0x3c3a34: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_3c3a38:
    if (ctx->pc == 0x3C3A38u) {
        ctx->pc = 0x3C3A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A34u;
        // 0x3c3a38: 0x24e3006c  addiu       $v1, $a3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3A3Cu;
        goto label_3c3a3c;
    }
    ctx->pc = 0x3C3A34u;
    {
        const bool branch_taken_0x3c3a34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A34u;
        // 0x3c3a38: 0x24e3006c  addiu       $v1, $a3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3a34) {
            ctx->pc = 0x3C3A98u;
            goto label_3c3a98;
        }
    }
    ctx->pc = 0x3C3A3Cu;
label_3c3a3c:
    // 0x3c3a3c: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3c3a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_3c3a40:
    // 0x3c3a40: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3c3a44:
    if (ctx->pc == 0x3C3A44u) {
        ctx->pc = 0x3C3A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A40u;
        // 0x3c3a44: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3A48u;
        goto label_3c3a48;
    }
    ctx->pc = 0x3C3A40u;
    {
        const bool branch_taken_0x3c3a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A40u;
        // 0x3c3a44: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3a40) {
            ctx->pc = 0x3C3A7Cu;
            goto label_3c3a7c;
        }
    }
    ctx->pc = 0x3C3A48u;
label_3c3a48:
    // 0x3c3a48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3c3a4c:
    if (ctx->pc == 0x3C3A4Cu) {
        ctx->pc = 0x3C3A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A48u;
        // 0x3c3a4c: 0xac65fffc  sw          $a1, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3A50u;
        goto label_3c3a50;
    }
    ctx->pc = 0x3C3A48u;
    {
        const bool branch_taken_0x3c3a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A48u;
        // 0x3c3a4c: 0xac65fffc  sw          $a1, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3a48) {
            ctx->pc = 0x3C3A68u;
            goto label_3c3a68;
        }
    }
    ctx->pc = 0x3C3A50u;
label_3c3a50:
    // 0x3c3a50: 0x2686ffff  addiu       $a2, $s4, -0x1
    ctx->pc = 0x3c3a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3c3a54:
    // 0x3c3a54: 0xac72ffe4  sw          $s2, -0x1C($v1)
    ctx->pc = 0x3c3a54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967268), GPR_U32(ctx, 18));
label_3c3a58:
    // 0x3c3a58: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x3c3a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_3c3a5c:
    // 0x3c3a5c: 0xacf3006c  sw          $s3, 0x6C($a3)
    ctx->pc = 0x3c3a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 108), GPR_U32(ctx, 19));
label_3c3a60:
    // 0x3c3a60: 0x24e300dc  addiu       $v1, $a3, 0xDC
    ctx->pc = 0x3c3a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 220));
label_3c3a64:
    // 0x3c3a64: 0xac65fffc  sw          $a1, -0x4($v1)
    ctx->pc = 0x3c3a64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 5));
label_3c3a68:
    // 0x3c3a68: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3c3a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3c3a6c:
    // 0x3c3a6c: 0xac72ffe4  sw          $s2, -0x1C($v1)
    ctx->pc = 0x3c3a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967268), GPR_U32(ctx, 18));
label_3c3a70:
    // 0x3c3a70: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x3c3a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_3c3a74:
    // 0x3c3a74: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x3c3a74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_3c3a78:
    // 0x3c3a78: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x3c3a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_3c3a7c:
    // 0x3c3a7c: 0xac65fffc  sw          $a1, -0x4($v1)
    ctx->pc = 0x3c3a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 5));
label_3c3a80:
    // 0x3c3a80: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3c3a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3c3a84:
    // 0x3c3a84: 0xac72ffe4  sw          $s2, -0x1C($v1)
    ctx->pc = 0x3c3a84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967268), GPR_U32(ctx, 18));
label_3c3a88:
    // 0x3c3a88: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x3c3a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_3c3a8c:
    // 0x3c3a8c: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x3c3a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_3c3a90:
    // 0x3c3a90: 0x10c00018  beqz        $a2, . + 4 + (0x18 << 2)
label_3c3a94:
    if (ctx->pc == 0x3C3A94u) {
        ctx->pc = 0x3C3A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A90u;
        // 0x3c3a94: 0x24630070  addiu       $v1, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3A98u;
        goto label_3c3a98;
    }
    ctx->pc = 0x3C3A90u;
    {
        const bool branch_taken_0x3c3a90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A90u;
        // 0x3c3a94: 0x24630070  addiu       $v1, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3a90) {
            ctx->pc = 0x3C3AF4u;
            goto label_3c3af4;
        }
    }
    ctx->pc = 0x3C3A98u;
label_3c3a98:
    // 0x3c3a98: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3c3a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3c3a9c:
    // 0x3c3a9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c3a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c3aa0:
    // 0x3c3aa0: 0xac85fffc  sw          $a1, -0x4($a0)
    ctx->pc = 0x3c3aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 5));
label_3c3aa4:
    // 0x3c3aa4: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x3c3aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_3c3aa8:
    // 0x3c3aa8: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x3c3aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_3c3aac:
    // 0x3c3aac: 0xac72ffe4  sw          $s2, -0x1C($v1)
    ctx->pc = 0x3c3aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967268), GPR_U32(ctx, 18));
label_3c3ab0:
    // 0x3c3ab0: 0xac85006c  sw          $a1, 0x6C($a0)
    ctx->pc = 0x3c3ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 5));
label_3c3ab4:
    // 0x3c3ab4: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x3c3ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_3c3ab8:
    // 0x3c3ab8: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x3c3ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_3c3abc:
    // 0x3c3abc: 0xac8500dc  sw          $a1, 0xDC($a0)
    ctx->pc = 0x3c3abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 5));
label_3c3ac0:
    // 0x3c3ac0: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x3c3ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_3c3ac4:
    // 0x3c3ac4: 0xac720054  sw          $s2, 0x54($v1)
    ctx->pc = 0x3c3ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 18));
label_3c3ac8:
    // 0x3c3ac8: 0xac85014c  sw          $a1, 0x14C($a0)
    ctx->pc = 0x3c3ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 332), GPR_U32(ctx, 5));
label_3c3acc:
    // 0x3c3acc: 0xac530070  sw          $s3, 0x70($v0)
    ctx->pc = 0x3c3accu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 19));
label_3c3ad0:
    // 0x3c3ad0: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x3c3ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_3c3ad4:
    // 0x3c3ad4: 0xac7200c4  sw          $s2, 0xC4($v1)
    ctx->pc = 0x3c3ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 18));
label_3c3ad8:
    // 0x3c3ad8: 0x248401c0  addiu       $a0, $a0, 0x1C0
    ctx->pc = 0x3c3ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
label_3c3adc:
    // 0x3c3adc: 0xac5300e0  sw          $s3, 0xE0($v0)
    ctx->pc = 0x3c3adcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 19));
label_3c3ae0:
    // 0x3c3ae0: 0xac720134  sw          $s2, 0x134($v1)
    ctx->pc = 0x3c3ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 18));
label_3c3ae4:
    // 0x3c3ae4: 0xac530150  sw          $s3, 0x150($v0)
    ctx->pc = 0x3c3ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 336), GPR_U32(ctx, 19));
label_3c3ae8:
    // 0x3c3ae8: 0x246301c0  addiu       $v1, $v1, 0x1C0
    ctx->pc = 0x3c3ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
label_3c3aec:
    // 0x3c3aec: 0x14c0ffec  bnez        $a2, . + 4 + (-0x14 << 2)
label_3c3af0:
    if (ctx->pc == 0x3C3AF0u) {
        ctx->pc = 0x3C3AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3AECu;
        // 0x3c3af0: 0x244201c0  addiu       $v0, $v0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3AF4u;
        goto label_3c3af4;
    }
    ctx->pc = 0x3C3AECu;
    {
        const bool branch_taken_0x3c3aec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3AECu;
        // 0x3c3af0: 0x244201c0  addiu       $v0, $v0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3aec) {
            ctx->pc = 0x3C3AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3aa0;
        }
    }
    ctx->pc = 0x3C3AF4u;
label_3c3af4:
    // 0x3c3af4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c3af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c3af8:
    // 0x3c3af8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3c3af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c3afc:
    // 0x3c3afc: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3c3afcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c3b00:
    // 0x3c3b00: 0xc0f079a  jal         func_3C1E68
label_3c3b04:
    if (ctx->pc == 0x3C3B04u) {
        ctx->pc = 0x3C3B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B00u;
        // 0x3c3b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3B08u;
        goto label_3c3b08;
    }
    ctx->pc = 0x3C3B00u;
    SET_GPR_U32(ctx, 31, 0x3C3B08u);
    ctx->pc = 0x3C3B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3B00u;
    // 0x3c3b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1E68u, 0x3C3B00u, 0x3C3B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3B08u;
label_3c3b08:
    // 0x3c3b08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c3b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c3b0c:
    // 0x3c3b0c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_3c3b10:
    if (ctx->pc == 0x3C3B10u) {
        ctx->pc = 0x3C3B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B0Cu;
        // 0x3c3b10: 0x27d0e880  addiu       $s0, $fp, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3B14u;
        goto label_3c3b14;
    }
    ctx->pc = 0x3C3B0Cu;
    {
        const bool branch_taken_0x3c3b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C3B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B0Cu;
        // 0x3c3b10: 0x27d0e880  addiu       $s0, $fp, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3b0c) {
            ctx->pc = 0x3C3B1Cu;
            goto label_3c3b1c;
        }
    }
    ctx->pc = 0x3C3B14u;
label_3c3b14:
    // 0x3c3b14: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c3b18:
    if (ctx->pc == 0x3C3B18u) {
        ctx->pc = 0x3C3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B14u;
        // 0x3c3b18: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3B1Cu;
        goto label_3c3b1c;
    }
    ctx->pc = 0x3C3B14u;
    {
        const bool branch_taken_0x3c3b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B14u;
        // 0x3c3b18: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3b14) {
            ctx->pc = 0x3C3B38u;
            goto label_3c3b38;
        }
    }
    ctx->pc = 0x3C3B1Cu;
label_3c3b1c:
    // 0x3c3b1c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x3c3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3c3b20:
    // 0x3c3b20: 0x40f809  jalr        $v0
label_3c3b24:
    if (ctx->pc == 0x3C3B24u) {
        ctx->pc = 0x3C3B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B20u;
        // 0x3c3b24: 0x8e440058  lw          $a0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3B28u;
        goto label_3c3b28;
    }
    ctx->pc = 0x3C3B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C3B28u);
        ctx->pc = 0x3C3B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B20u;
        // 0x3c3b24: 0x8e440058  lw          $a0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3B20u, 0x3C3B28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C3B28u;
label_3c3b28:
    // 0x3c3b28: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x3c3b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3c3b2c:
    // 0x3c3b2c: 0x60f809  jalr        $v1
label_3c3b30:
    if (ctx->pc == 0x3C3B30u) {
        ctx->pc = 0x3C3B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B2Cu;
        // 0x3c3b30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3B34u;
        goto label_3c3b34;
    }
    ctx->pc = 0x3C3B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C3B34u);
        ctx->pc = 0x3C3B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B2Cu;
        // 0x3c3b30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3B2Cu, 0x3C3B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C3B34u;
label_3c3b34:
    // 0x3c3b34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c3b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c3b38:
    // 0x3c3b38: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3c3b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c3b3c:
    // 0x3c3b3c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3c3b3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c3b40:
    // 0x3c3b40: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3c3b40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c3b44:
    // 0x3c3b44: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3c3b44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c3b48:
    // 0x3c3b48: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3c3b48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c3b4c:
    // 0x3c3b4c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3c3b4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c3b50:
    // 0x3c3b50: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3c3b50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c3b54:
    // 0x3c3b54: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3c3b54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c3b58:
    // 0x3c3b58: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3c3b58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c3b5c:
    // 0x3c3b5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c3b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c3b60:
    // 0x3c3b60: 0x3e00008  jr          $ra
label_3c3b64:
    if (ctx->pc == 0x3C3B64u) {
        ctx->pc = 0x3C3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B60u;
        // 0x3c3b64: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3B68u;
        goto label_fallthrough_0x3c3b60;
    }
    ctx->pc = 0x3C3B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B60u;
        // 0x3c3b64: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c3b60:
    ctx->pc = 0x3C3B68u;
}
